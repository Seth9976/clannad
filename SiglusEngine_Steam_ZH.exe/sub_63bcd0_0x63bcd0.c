// 函数: sub_63bcd0
// 地址: 0x63bcd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c29fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
sub_575830(arg1)
int32_t var_8_1 = 0
*arg1 = &C_db_wnd_info_namae_flag::`vftable'{for `C_db_wnd_info'}
struct NT3::C_window_base::VTable** var_18 = &arg1[0x2e]
sub_642e20(&arg1[0x2e])
int32_t (__fastcall* var_28)(struct NT3::C_window_base::VTable** arg1) = j_sub_575910
var_8_1.b = 1
sub_74675f(&arg1[0x53], 0x334, 2, Concurrency::details::SingleWaitBlock::SingleWaitBlock)
void (__fastcall* var_28_1)(int32_t* arg1) = sub_55d540
var_8_1.b = 2
sub_74675f(&arg1[0x1ed], 0xc, 2, PDBStream::PDBStream)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
