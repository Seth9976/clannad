// 函数: __dosmaperr
// 地址: 0x1000399e
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

*___doserrno() = arg1
int32_t eax_1 = __get_errno_from_oserr(arg1)
void* result = __errno()
*result = eax_1
return result
