// 函数: sub_7492b9
// 地址: 0x7492b9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
RtlUnwind(arg1, &data_7492e3, arg2, nullptr)
uint32_t result = arg2->ExceptionFlags & 0xfffffffd
arg2->ExceptionFlags = result
ExceptionList->Next = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = ExceptionList
return result
