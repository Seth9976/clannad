// 函数: sub_619040
// 地址: 0x619040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AAVios_base@2@PAH@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = data_bac454
void* var_74 = nullptr
int32_t var_70 = 0
int32_t var_8_1 = 0
int32_t var_7c = 0
int32_t* var_6c = nullptr
int32_t var_78 = 0
var_8_1.b = 1
int32_t var_1c = 0
int32_t var_18 = 7
int16_t var_2c = 0
sub_52e720(&var_2c, &data_aef37c, 7)
var_8_1.b = 2
void var_88
void* var_c8 = &var_88
void** eax_4 = sub_6a1200(var_c8, &var_2c, arg1, arg2, 0, 0x401, 0x15, 0, 1)
void* edx = *eax_4
int32_t* ecx_1 = eax_4[1]
eax_4[1] = 0
*eax_4 = nullptr
var_8_1.b = 2
var_74 = edx
int32_t* var_70_1 = ecx_1
int32_t* var_84

if (var_84 != 0)
    bool cond:0_1 = var_84[1] != 1
    var_84[1]
    var_84[1] -= 1
    
    if (not(cond:0_1))
        (*(*var_84 + 4))(eax_2)
        bool cond:1_1 = var_84[2] != 1
        var_84[2]
        var_84[2] -= 1
        
        if (not(cond:1_1))
            (*(*var_84 + 8))()

var_8_1.b = 1

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_5c
int16_t var_44
int32_t var_30

if (edx == 0)
    int16_t* eax_9 = sub_6b9ed0(&var_5c)
    int32_t var_ac_2 = arg2
    var_8_1.b = 4
    int32_t var_b0_1 = arg1
    sub_52e820(&var_c8, 0xaf3f20)
    int16_t* eax_10 = sub_6ae4c0(&var_44, var_c8)
    var_8_1.b = 5
    int16_t* eax_11 = sub_5327a0(eax_10, eax_10, &var_2c, eax_9)
    var_8_1.b = 6
    sub_684160(data_bac424, 2, eax_11)
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    goto label_61933b

void* var_a8_7 = 7
int32_t var_18_2 = 7
void* const var_ac_4 = &data_aef37c
int32_t var_1c_2 = 0
var_2c = 0
int32_t var_a8_8 = sub_52e720(&var_2c, var_ac_4, var_a8_7)
var_8_1.b = 7
int32_t* eax_12 = sub_6a3730(&var_88, &var_2c, arg1, arg2)
int32_t edx_2 = *eax_12
int32_t* ecx_12 = eax_12[1]
eax_12[1] = 0
*eax_12 = 0
var_8_1.b = 7
var_6c = ecx_12
var_7c = edx_2
int32_t* var_78_1 = ecx_12

if (var_84 != 0)
    bool cond:2_1 = var_84[1] != 1
    var_84[1]
    var_84[1] -= 1
    
    if (not(cond:2_1))
        (*(*var_84 + 4))(eax_2)
        bool cond:4_1 = var_84[2] != 1
        var_84[2]
        var_84[2] -= 1
        
        if (not(cond:4_1))
            (*(*var_84 + 8))()

var_8_1.b = 1

if (var_18_2 u>= 8)
    j__free(var_2c.d)

int32_t ebx
int32_t var_48

if (edx_2 != 0)
    void* var_a8_15 = 7
    int32_t var_18_4 = 7
    void* const var_ac_8 = &data_aef37c
    int32_t var_1c_4 = 0
    var_2c = 0
    sub_52e720(&var_2c, var_ac_8, var_a8_15)
    char var_a8_16 = 0
    int32_t var_ac_9 = 2
    int32_t var_b0_4 = 0x15
    int32_t var_b4_2 = 0
    int32_t var_b8_2 = 0
    void** var_c4_1 = &var_2c
    var_8_1.b = 0xc
    int32_t var_90
    var_c8 = &var_90
    sub_6a1200(var_c8, var_c4_1, arg1, arg2, var_b8_2, var_b4_2, var_b0_4, var_ac_9, var_a8_16)
    var_8_1.b = 0xe
    
    if (var_18_4 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_5 = 7
    int32_t var_1c_5 = 0
    var_2c = 0
    
    if (var_90 != 0)
        sub_5b17d0(&eax_3[0x706], &var_74)
        sub_5b17d0(&eax_3[0x708], &var_7c)
        sub_5b17d0(&eax_3[0x70a], &var_90)
        eax_3[0x70c] = arg1
        ebx.b = 1
        eax_3[0x70d] = arg2
    else
        int16_t* eax_20 = sub_6b9ed0(&var_5c)
        var_8_1.b = 0xf
        int16_t* eax_21 = sub_548cb0(eax_20, 0xaf420c, &var_44, eax_20)
        var_8_1.b = 0x10
        sub_684160(data_bac424, 2, eax_21)
        
        if (var_30 u>= 8)
            j__free(var_44.d)
        
        int32_t var_30_3 = 7
        int32_t var_34_3 = 0
        var_44 = 0
        
        if (var_48 u>= 8)
            j__free(var_5c)
        
        int32_t var_48_1 = 7
        int32_t var_4c_1 = 0
        ebx.b = 0
        var_5c.w = 0
    
    var_8_1.b = 1
    int32_t* var_8c
    
    if (var_8c != 0)
        bool cond:6_1 = var_8c[1] != 1
        var_8c[1]
        var_8c[1] -= 1
        
        if (not(cond:6_1))
            (*(*var_8c + 4))(eax_2)
            bool cond:9_1 = var_8c[2] != 1
            var_8c[2]
            var_8c[2] -= 1
            
            if (not(cond:9_1))
                (*(*var_8c + 8))()
else
    int16_t* eax_17 = sub_6b9ed0(&var_5c)
    int32_t var_ac_6 = arg2
    var_8_1.b = 9
    int32_t var_b0_3 = arg1
    sub_52e820(&var_c8, 0xaf3f68)
    int16_t* eax_18 = sub_6ae4c0(&var_2c, var_c8)
    var_8_1.b = 0xa
    int16_t* eax_19 = sub_5327a0(eax_18, eax_18, &var_44, eax_17)
    var_8_1.b = 0xb
    sub_684160(data_bac424, 2, eax_19)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_2 = 7
    int32_t var_34_2 = 0
    var_44 = 0
    
    if (var_18_2 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_3 = 7
    int32_t var_1c_3 = 0
    var_2c = 0
label_61933b:
    
    if (var_48 u>= 8)
        j__free(var_5c)
    
    ebx.b = 0
var_8_1.b = 0

if (var_6c != 0)
    bool cond:8_1 = var_6c[1] != 1
    var_6c[1]
    var_6c[1] -= 1
    
    if (not(cond:8_1))
        (*(*var_6c + 4))(eax_2)
        bool cond:11_1 = var_6c[2] != 1
        var_6c[2]
        var_6c[2] -= 1
        
        if (not(cond:11_1))
            (*(*var_6c + 8))()

int32_t var_8_2 = 0xffffffff

if (ecx_1 != 0)
    bool cond:10_1 = ecx_1[1] != 1
    ecx_1[1]
    ecx_1[1] -= 1
    
    if (not(cond:10_1))
        (*(*ecx_1 + 4))(eax_2)
        int32_t esi_1 = ecx_1[2]
        ecx_1[2] -= 1
        
        if (esi_1 == 1)
            (*(*ecx_1 + 8))()

int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
