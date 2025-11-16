// 函数: __mtdeletelocks
// 地址: 0x5fc21e
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* i_1 = &data_63c740

for (void* i = &data_63c740; i s< &data_63c860; i += 8)
    CRITICAL_SECTION* lpCriticalSection = *i
    
    if (lpCriticalSection != 0 && *(i + 4) != 1)
        DeleteCriticalSection(lpCriticalSection)
        _free(lpCriticalSection)
        *i = 0

do
    if (*i_1 != 0 && *(i_1 + 4) == 1)
        DeleteCriticalSection(*i_1)
    
    i_1 += 8
while (i_1 s< &data_63c860)
