// 函数: sub_1000edb6
// 地址: 0x1000edb6
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
RtlUnwind(arg1, &data_1000ede0, arg2, nullptr)
uint32_t result = arg2->ExceptionFlags & 0xfffffffd
arg2->ExceptionFlags = result
ExceptionList->Next = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = ExceptionList
return result
