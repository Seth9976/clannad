// 函数: sub_63b940
// 地址: 0x63b940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

struct NT3::C_window_base::VTable** var_8 = arg1
void* ecx = arg1[0xda5]

if (ecx != 0)
    struct NT3::C_window_base::VTable** var_14_1 = var_8
    void* var_18_1 = ecx
    sub_579a70(ecx, arg1[0xda6])
    j__free(arg1[0xda5])
    arg1[0xda5] = 0
    arg1[0xda6] = 0
    arg1[0xda7] = 0

int32_t eax = arg1[0xda2]

if (eax != 0)
    j__free(eax)
    arg1[0xda2] = 0
    arg1[0xda3] = 0
    arg1[0xda4] = 0

int32_t** eax_1 = arg1[0xda0]
sub_5784e0(&arg1[0xda0], &var_8, *eax_1, eax_1)
j__free(arg1[0xda0])
sub_63dc90(&arg1[0xd85])
sub_63dc90(&arg1[0xd6a])
arg1[0xd46] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0xd69] u>= 8)
    j__free(arg1[0xd64])

arg1[0xd69] = 7
arg1[0xd68] = 0
arg1[0xd64].w = 0
sub_6bfb10(&arg1[0xd46])
arg1[0xd22] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0xd45] u>= 8)
    j__free(arg1[0xd40])

arg1[0xd45] = 7
arg1[0xd44] = 0
arg1[0xd40].w = 0
sub_6bfb10(&arg1[0xd22])
sub_575910(&arg1[0xc55])
sub_575910(&arg1[0xb88])
sub_575910(&arg1[0xabb])
sub_575910(&arg1[0x9ee])
sub_575910(&arg1[0x921])
sub_575910(&arg1[0x854])
sub_575910(&arg1[0x787])
sub_575910(&arg1[0x6ba])
sub_575910(&arg1[0x5ed])
sub_575910(&arg1[0x520])
sub_575910(&arg1[0x453])
sub_575910(&arg1[0x386])
sub_575910(&arg1[0x2b9])
sub_575910(&arg1[0x1ec])
sub_575910(&arg1[0x11f])
sub_575910(&arg1[0x52])
arg1[0x2e] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x51] u>= 8)
    j__free(arg1[0x4c])

arg1[0x51] = 7
arg1[0x50] = 0
arg1[0x4c].w = 0
sub_6bfb10(&arg1[0x2e])
sub_575890(arg1)
return 0
