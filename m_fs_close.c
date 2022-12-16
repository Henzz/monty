#include "header.h"

/**
 * m_fs_close - close file stream
 * @status: status passed to exit
 * @arg: pointer to file stream
 */
void m_fs_close(int status, void *arg)
{
	FILE *fs;

	(void)status;

	fs = (FILE *)arg;
	fclose(fs);
}
