// 函数: __dosmaperr
// 地址: 0x747009
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*___doserrno() = arg1
int32_t eax_1 = __get_errno_from_oserr(arg1)
void* result = __errno()
*result = eax_1
return result
