// 函数: sub_6372e0
// 地址: 0x6372e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c2264
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
int32_t var_8_1 = 0
sub_575710(&arg1[0xcf9f])
sub_63bf70(&arg1[0xce2e])
int32_t eax_3 = arg1[0xce2b]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0xce2b] = 0
    arg1[0xce2c] = 0
    arg1[0xce2d] = 0

sub_575710(&arg1[0xcd26])
sub_63bf10(&arg1[0xcc1e])
void* var_18 = &arg1[0xca29]
var_8_1.b = 0x33
`eh vector vbase constructor iterator'(&arg1[0xcc16], 0xc, 2, sub_5920b0)
var_8_1.b = 0x32
sub_63dda0(&arg1[0xca57])
sub_575890(&arg1[0xca29])
var_8_1.b = 0x30
`eh vector vbase constructor iterator'(&arg1[0xc405], 0x418, 6, j_sub_575710)
sub_575710(&arg1[0xc300])
sub_575710(&arg1[0xc1fb])
sub_575710(&arg1[0xc0f0])
sub_575710(&arg1[0xbfeb])
void* var_18_1 = &arg1[0xbdf6]
var_8_1.b = 0x35
`eh vector vbase constructor iterator'(&arg1[0xbfe3], 0xc, 2, sub_55d540)
var_8_1.b = 0x34
sub_63dda0(&arg1[0xbe24])
sub_575890(&arg1[0xbdf6])
sub_63bc70(&arg1[0xbcee])
sub_63bc10(&arg1[0xbbe6])
var_8_1.b = 0x28
`eh vector vbase constructor iterator'(&arg1[0xa76e], 0x418, 0x14, j_sub_575710)
var_8_1.b = 0x27
`eh vector vbase constructor iterator'(&arg1[0x99d2], 0x430, 0xd, sub_63bbd0)
sub_63b940(&arg1[0x8c29])
int32_t eax_9 = arg1[0x8c26]

if (eax_9 != 0)
    j__free(eax_9)
    arg1[0x8c26] = 0
    arg1[0x8c27] = 0
    arg1[0x8c28] = 0

sub_575710(&arg1[0x8b21])
sub_63dc30(&arg1[0x8962])
sub_575890(&arg1[0x8934])
sub_63dba0(&arg1[0x8926])
sub_63dba0(&arg1[0x8919])
sub_63daf0(&arg1[0x871c])
sub_575890(&arg1[0x86ee])
sub_575710(&arg1[0x85e9])
int32_t eax_10 = arg1[0x85e6]

if (eax_10 != 0)
    j__free(eax_10)
    arg1[0x85e6] = 0
    arg1[0x85e7] = 0
    arg1[0x85e8] = 0

sub_575710(&arg1[0x84e1])
int32_t eax_11 = arg1[0x84de]

if (eax_11 != 0)
    j__free(eax_11)
    arg1[0x84de] = 0
    arg1[0x84df] = 0
    arg1[0x84e0] = 0

sub_575710(&arg1[0x83d9])
int32_t eax_12 = arg1[0x83d6]

if (eax_12 != 0)
    j__free(eax_12)
    arg1[0x83d6] = 0
    arg1[0x83d7] = 0
    arg1[0x83d8] = 0

sub_575710(&arg1[0x82d1])
sub_575710(&arg1[0x81ba])
sub_573150(&arg1[0x81a1])
sub_575710(&arg1[0x809c])

if (arg1[0x806f] u>= 8)
    j__free(arg1[0x806a])

arg1[0x806f] = 7
arg1[0x806e] = 0
arg1[0x806a].w = 0
sub_575710(&arg1[0x7f64])
sub_575710(&arg1[0x7e4a])
var_8_1.b = 0x1a
sub_571660(&arg1[0x7e46])
sub_575710(&arg1[0x7d41])
sub_575710(&arg1[0x7c38])
sub_63b330(&arg1[0x7b18])
void* var_18_2 = &arg1[0x7a05]
var_8_1.b = 0x37
int32_t* esi_4 = arg1[0x7b17]

if (esi_4 != 0)
    bool cond:1_1 = esi_4[1] != 1
    esi_4[1]
    esi_4[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi_4 + 4))(eax_2)
        int32_t ebx_1 = esi_4[2]
        esi_4[2] -= 1
        
        if (ebx_1 == 1)
            (*(*esi_4 + 8))()

sub_63d8d0(&arg1[0x7a33])
sub_575890(&arg1[0x7a05])
sub_63b220(&arg1[0x7922])
sub_63d430(&arg1[0x77de])
sub_575890(&arg1[0x77b0])
sub_63b050(&arg1[0x76b1])
sub_640e40(&arg1[0x76a2])
sub_640c10(&arg1[0x74f5])
sub_575890(&arg1[0x74be])
sub_640e40(&arg1[0x74af])
sub_640c10(&arg1[0x7302])
sub_575890(&arg1[0x72cb])
sub_5caa90(&arg1[0x71ce])
sub_575890(&arg1[0x7197])
sub_640790(&arg1[0x6f9f])
sub_575890(&arg1[0x6f69])
void* var_18_3 = &arg1[0x6872]
var_8_1.b = 0x38
sub_6404d0(&arg1[0x68a8])
sub_575890(&arg1[0x6872])
sub_640140(&arg1[0x6709])
sub_575890(&arg1[0x66d3])
sub_63e980(&arg1[0x6522])
sub_575890(&arg1[0x64ec])
sub_63fcb0(&arg1[0x635f])
sub_575890(&arg1[0x6329])
sub_535af0(&arg1[0x6326])
sub_63fa00(&arg1[0x6225])
sub_575890(&arg1[0x61ef])
sub_63f730(&arg1[0x6116])
sub_575890(&arg1[0x60e0])
sub_535af0(&arg1[0x60dd])
sub_63fa00(&arg1[0x5fdc])
sub_63f730(&arg1[0x5efc])
sub_575890(&arg1[0x5ec6])
sub_63f730(&arg1[0x5ded])
sub_575890(&arg1[0x5db7])
sub_63f140(&arg1[0x5ac2])
sub_575890(&arg1[0x5a8b])
sub_63f730(&arg1[0x59b2])
sub_63f140(&arg1[0x56b6])
sub_575890(&arg1[0x567f])
sub_63d250(&arg1[0x5549])
sub_575890(&arg1[0x551a])
sub_63a450(&arg1[0x5310])
sub_63a3f0(&arg1[0x4fd0])
sub_63e1f0(&arg1[0x4977])
sub_575890(&arg1[0x4941])
var_8_1.b = 1
sub_63a140(&arg1[0x24a2])
var_8_1.b = 0
sub_63a140(&arg1[3])
int32_t result = *arg1

if (result != 0)
    result = j__free(result)
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
