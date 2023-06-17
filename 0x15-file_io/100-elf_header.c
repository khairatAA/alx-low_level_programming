#include "main.h"
#include <elf.h>

/**
 * get_class - gets class
 * @class: class
 * Return: result
 */
const char *get_class(unsigned char class)
{
	switch (class)
	{
		case ELFCLASS32:
			return ("ELF32");
		case ELFCLASS64:
			return ("ELF64");
		default:
			return ("Unknown");
	}
}

/**
 * get_data - gets data
 * @data: data
 * Return: result
 */
const char *get_data(unsigned char data)
{
	switch (data)
	{
		case ELFDATA2LSB:
			return ("2's complement, little endian");
		case ELFDATA2MSB:
			return ("2's complement, big endian");
		default:
			return ("Unknown");
	}
}

/**
 * get_osabi - get osabi
 * @osabi: osabi
 * Return: success
 */
const char *get_osabi(unsigned char osabi)
{
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			return ("UNIX - System V");
		case ELFOSABI_HPUX:
			return ("HP-UX");
		case ELFOSABI_NETBSD:
			return ("NetBSD");
		case ELFOSABI_LINUX:
			return ("Linux");
		case ELFOSABI_SOLARIS:
			return ("Solaris");
		case ELFOSABI_AIX:
			return ("AIX");
		case ELFOSABI_IRIX:
			return ("IRIX");
		case ELFOSABI_FREEBSD:
			return ("FreeBSD");
		case ELFOSABI_TRU64:
			return ("TRU64 UNIX");
		case ELFOSABI_ARM:
			return ("ARM");
		case ELFOSABI_STANDALONE:
			return ("Standalone App");
		default:
			return ("Unknown");
	}
}

/**
 * get_type - gets type
 * @type: type
 * Return: sucess
 */
const char *get_type(unsigned int type)
{
	switch (type)
	{
		case ET_NONE:
			return ("None");
		case ET_REL:
			return ("Relocatable file");
		case ET_EXEC:
			return ("Executable file");
		case ET_DYN:
			return ("Shared object file");
		case ET_CORE:
			return ("Core file");
		default:
			return ("Unknown");
	}
}

/**
 * main - Entry point
 * @argc: the count of the argument passed
 * @argv: string containing all arguments passed
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	const char *file = argv[1];
	int fd, i;
	Elf64_Ehdr elfHeader;

	if (argc != 2)
	{
		perror("Usage: elf_header elf_filename");
		exit(98);
	}
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		perror("Unable to open the file");
		exit(98);
	}
	if (read(fd, &elfHeader, sizeof(elfHeader)) != sizeof(elfHeader))
	{
		perror("Unable to read the elfHeader");
		exit(98);
	}
	if (elfHeader.e_ident[EI_MAG0] != ELFMAG0 ||
		elfHeader.e_ident[EI_MAG1] != ELFMAG1 ||
		elfHeader.e_ident[EI_MAG2] != ELFMAG2 ||
		elfHeader.e_ident[EI_MAG3] != ELFMAG3)
	{
		perror("This is not an ELF file");
		exit(98);
	}
	printf("ELF Header:\n");
	printf(" Magic:  ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", elfHeader.e_ident[i]);
	printf("\n");
	printf(" Class:  %-30s\n", get_class(elfHeader.e_ident[EI_CLASS]));
	printf(" Data:  %-30s\n", get_data(elfHeader.e_ident[EI_DATA]));
	printf(" Version: %-30d\n", elfHeader.e_ident[EI_VERSION]);
	printf(" OS/ABI:  %-30s\n", get_osabi(elfHeader.e_ident[EI_OSABI]));
	printf(" ABI Version: %-25d\n", elfHeader.e_ident[EI_ABIVERSION]);
	printf(" Type:   %-30s\n", get_type(elfHeader.e_type));
	printf(" Entry point address:   0x%lx\n", elfHeader.e_entry);
	printf(" Format: %-30d\n", elfHeader.e_ident[EI_VERSION]);

	close(fd);
	return (0);
}
