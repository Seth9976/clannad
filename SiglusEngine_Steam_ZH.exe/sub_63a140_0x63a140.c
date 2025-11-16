// 函数: sub_63a140
// 地址: 0x63a140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c26a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t var_8_1 = 0
sub_640790(&arg1[0x22a7])
sub_575890(&arg1[0x2271])
void* var_18 = &arg1[0x1b7a]
var_8_1.b = 0xe
sub_6404d0(&arg1[0x1bb0])
sub_575890(&arg1[0x1b7a])
sub_640140(&arg1[0x1a11])
sub_575890(&arg1[0x19db])
sub_63e980(&arg1[0x182a])
sub_575890(&arg1[0x17f4])
sub_63fcb0(&arg1[0x1667])
sub_575890(&arg1[0x1631])
sub_535af0(&arg1[0x162e])
sub_63fa00(&arg1[0x152d])
sub_575890(&arg1[0x14f7])
sub_63f730(&arg1[0x141e])
sub_575890(&arg1[0x13e8])
sub_535af0(&arg1[0x13e5])
sub_63fa00(&arg1[0x12e4])
sub_63f730(&arg1[0x1204])
sub_575890(&arg1[0x11ce])
sub_63f140(&arg1[0xed9])
sub_575890(&arg1[0xea2])
sub_63f730(&arg1[0xdc9])
sub_63f140(&arg1[0xacd])
sub_575890(&arg1[0xa96])
sub_63a3f0(&arg1[0x756])
sub_63e1f0(&arg1[0xfd])
sub_575890(&arg1[0xc7])
int32_t eax_3 = arg1[0xc4]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0xc4] = 0
    arg1[0xc5] = 0
    arg1[0xc6] = 0

int32_t eax_4 = arg1[0xc1]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0xc1] = 0
    arg1[0xc2] = 0
    arg1[0xc3] = 0

sub_63c900(&arg1[0x2f])
sub_575890(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
