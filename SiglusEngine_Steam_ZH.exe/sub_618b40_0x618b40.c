// 函数: sub_618b40
// 地址: 0x618b40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf7fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 7
char var_75 = 0
void* eax_3 = data_bac510
int32_t var_4c = 0
int32_t esi = *(eax_3 + 0x80)
int32_t i_2 = *(eax_3 + 0x7c)
int32_t var_90 = esi
int16_t var_5c = 0
sub_52e720(&var_5c, 0xaf409c, 0xf)
int32_t var_8_1 = 0
int32_t* var_8c
sub_6a1200(&var_8c, &var_5c, i_2, esi, 0, 0, 0x16, 2, 0)
var_8_1.b = 2

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t* ecx_1 = var_8c
int32_t var_48_1 = 7
int32_t var_4c_1 = 0
var_5c = 0
int32_t var_44
int32_t var_30
int16_t var_2c
int16_t* eax_5

if (ecx_1 == 0)
    int16_t* eax_4 = sub_6b9ed0(&var_44)
    var_8_1.b = 3
    eax_5 = sub_548cb0(eax_4, 0xaf40bc, &var_2c, eax_4)
    var_8_1.b = 4
label_618c30:
    sub_684160(data_bac424, 2, eax_5)
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    var_8_1.b = 2
    int32_t var_18_1 = 7
    int32_t var_1c = 0
    var_2c = 0
    
    if (var_30 u< 8)
        i_2.b = 0
    else
        j__free(var_44)
        i_2.b = var_75
    
    goto label_618f95

int32_t* var_b8_6 = ecx_1
int32_t* var_28
int32_t* eax_6
int32_t ecx_5
eax_6, ecx_5 = sub_6f3910(ecx_1, &var_28)
var_8_1.b = 5
int32_t var_b8_7 = *eax_6
bool cond:0_1 = sub_6f39a0(*(arg1 + 0x1bc8), ecx_5) == 0
var_8_1.b = 2
int32_t* ecx_8 = var_28

if (ecx_8 != 0)
    (*(*ecx_8 + 8))(ecx_8)

if (cond:0_1 != 0)
    void** eax_9 = sub_6b9ed0(&var_44)
    var_8_1.b = 6
    eax_5 = sub_548cb0(eax_9, 0xaf40f4, &var_2c, eax_9)
    var_8_1.b = 7
    goto label_618c30

int32_t var_18_2 = 7
int32_t var_1c_1 = 0
var_2c = 0
sub_52e720(&var_2c, &data_aef37c, 7)
var_8_1.b = 8
int32_t* var_80
int32_t ecx_12 = sub_6a1200(&var_80, &var_2c, i_2, esi, 0, 0x400, 0x15, 1, 0)
var_8_1.b = 0xa

if (var_18_2 u>= 8)
    ecx_12 = j__free(var_2c.d)

int32_t var_18_3 = 7
int32_t var_1c_2 = 0
var_2c = 0
int32_t var_74

if (var_80 != 0)
    int32_t var_b8_15 = 0x2000
    int32_t var_bc_3 = ecx_12
    int32_t var_98
    char eax_12
    int32_t ecx_17
    eax_12, ecx_17 = sub_6f3b20(var_8c, ecx_12, &var_98)
    
    if (eax_12 != 0)
        int32_t var_b8_18 = 0x2000
        int32_t var_bc_4 = ecx_17
        int32_t var_a0
        char eax_15
        uint32_t ecx_24
        eax_15, ecx_24 = sub_6f3b20(var_80, ecx_17, &var_a0)
        int32_t ecx_30
        
        if (eax_15 != 0)
            int32_t edi_1 = 0
            
            if (esi s> 0)
                do
                    int32_t var_9c
                    void* eax_20 = var_a0 * edi_1 + var_9c
                    int32_t var_94
                    char* edx_3 = var_98 * edi_1 + var_94
                    
                    if (i_2 s> 0)
                        int32_t i_1 = i_2
                        int32_t i
                        
                        do
                            eax_20 += 4
                            *(eax_20 - 4) = *edx_3
                            edx_3 = &edx_3[4]
                            *(eax_20 - 3) = edx_3[0xfffffffd]
                            ecx_24 = zx.d(edx_3[0xfffffffe])
                            *(eax_20 - 2) = ecx_24.b
                            *(eax_20 - 1) = 0xff
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        esi = var_90
                    
                    edi_1 += 1
                while (edi_1 s< esi)
            
            uint32_t var_b8_21 = ecx_24
            var_75 = 1
            ecx_30 = sub_6f3c40(var_80)
        else
            int16_t* eax_16 = sub_6b9ed0(&var_44)
            var_8_1.b = 0xf
            int16_t* eax_17 = sub_548cb0(eax_16, 0xaf418c, &var_74, eax_16)
            var_8_1.b = 0x10
            sub_684160(data_bac424, 2, eax_17)
            sub_52e8a0(&var_74)
            var_8_1.b = 0xa
            ecx_30 = sub_52e8a0(&var_44)
        
        int32_t var_b8_22 = ecx_30
        sub_6f3c40(var_8c)
    else
        int16_t* eax_13 = sub_6b9ed0(&var_44)
        var_8_1.b = 0xd
        int16_t* eax_14 = sub_548cb0(eax_13, 0xaf4150, &var_74, eax_13)
        var_8_1.b = 0xe
        sub_684160(data_bac424, 2, eax_14)
        sub_52e8a0(&var_74)
        var_8_1.b = 0xa
        sub_52e8a0(&var_44)
    
    sub_5b17d0(arg1 + 0x1c08, &var_80)
else
    int16_t* eax_10 = sub_6b9ed0(&var_74)
    var_8_1.b = 0xb
    int16_t* eax_11 = sub_548cb0(eax_10, 0xaf411c, &var_44, eax_10)
    var_8_1.b = 0xc
    sub_684160(data_bac424, 2, eax_11)
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44.w = 0
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74)
var_8_1.b = 2
int32_t* var_7c

if (var_7c != 0)
    bool cond:4_1 = var_7c[1] != 1
    var_7c[1]
    var_7c[1] -= 1
    
    if (not(cond:4_1))
        (*(*var_7c + 4))(eax_2)
        bool cond:5_1 = var_7c[2] != 1
        var_7c[2]
        var_7c[2] -= 1
        
        if (not(cond:5_1))
            (*(*var_7c + 8))()

i_2.b = var_75

if (i_2.b == 0)
label_618f95:
    int32_t var_18_5 = 7
    int32_t var_1c_4 = 0
    var_2c = 0
    sub_52e720(&var_2c, 0xaf41e4, 0x12)
    var_8_1.b = 0x12
    sub_684160(data_bac424, 5, &var_2c)
    
    if (var_18_5 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_6 = 7
    int32_t var_1c_5 = 0
    var_2c = 0
else
    int32_t var_18_4 = 7
    int32_t var_1c_3 = 0
    var_2c = 0
    sub_52e720(&var_2c, 0xaf41c4, 0xf)
    var_8_1.b = 0x11
    sub_684160(data_bac424, 5, &var_2c)
    
    if (var_18_4 u>= 8)
        j__free(var_2c.d)

int32_t var_8_2 = 0xffffffff
int32_t* var_88

if (var_88 != 0)
    bool cond:2_1 = var_88[1] != 1
    var_88[1]
    var_88[1] -= 1
    
    if (not(cond:2_1))
        (*(*var_88 + 4))(eax_2)
        int32_t edi_2 = var_88[2]
        var_88[2] -= 1
        
        if (edi_2 == 1)
            (*(*var_88 + 8))()

int32_t* result
result.b = i_2.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
