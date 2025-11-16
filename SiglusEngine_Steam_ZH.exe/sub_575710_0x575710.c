// 函数: sub_575710
// 地址: 0x575710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_575910(&arg1[0x38])
void* ecx_1 = arg1[0x35]

if (ecx_1 != 0)
    struct NT3::C_window_base::VTable** var_10_1 = arg1
    void* var_14_1 = ecx_1
    sub_579a00(ecx_1, arg1[0x36])
    j__free(arg1[0x35])
    arg1[0x35] = 0
    arg1[0x36] = 0
    arg1[0x37] = 0

if (arg1[0x34] u>= 8)
    j__free(arg1[0x2f])

arg1[0x34] = 7
arg1[0x33] = 0
arg1[0x2f].w = 0
sub_575890(arg1)
return 0
