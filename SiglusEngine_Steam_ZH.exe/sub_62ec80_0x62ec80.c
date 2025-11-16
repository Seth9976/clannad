// 函数: sub_62ec80
// 地址: 0x62ec80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_bac4a0
int32_t var_18 = 7
int32_t ebx = *(eax_3 + 8)
int32_t esi = *(eax_3 + 0xc)
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, 0xaf5974, 0xa)
int32_t var_8_1 = 0
void var_64
void** eax_4 = sub_6a1200(&var_64, &var_2c, ebx, esi, 0, 0x401, 0x15, 0, 1)
var_8_1.b = 1
void* esi_1 = data_bac454
void* ecx_1 = *eax_4
int32_t edx = eax_4[1]
eax_4[1] = 0
*eax_4 = nullptr
*(esi_1 + 0x1bd8) = ecx_1
int32_t* ebx_1 = *(esi_1 + 0x1bdc)
*(esi_1 + 0x1bdc) = edx

if (ebx_1 != 0)
    bool cond:0_1 = ebx_1[1] != 1
    ebx_1[1]
    ebx_1[1] -= 1
    
    if (not(cond:0_1))
        (*(*ebx_1 + 4))(eax_2)
        bool cond:2_1 = ebx_1[2] != 1
        ebx_1[2]
        ebx_1[2] -= 1
        
        if (not(cond:2_1))
            (*(*ebx_1 + 8))()

var_8_1.b = 0
int32_t* var_60

if (var_60 != 0)
    bool cond:1_1 = var_60[1] != 1
    var_60[1]
    var_60[1] -= 1
    
    if (not(cond:1_1))
        (*(*var_60 + 4))(eax_2)
        bool cond:3_1 = var_60[2] != 1
        var_60[2]
        var_60[2] -= 1
        
        if (not(cond:3_1))
            (*(*var_60 + 8))()

int32_t var_8_2 = 0xffffffff

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
var_2c = 0
int32_t var_1c_1 = 0
char* result
int32_t var_44
int16_t* eax_15

if (*(data_bac454 + 0x1bd8) != 0)
    int32_t var_18_3 = 7
    int32_t var_1c_3 = 0
    var_2c = 0
    int32_t var_80_6 = sub_52e720(&var_2c, 0xaf59d4, 9)
    int32_t var_8_4 = 4
    int32_t* eax_16 = sub_6a3730(&var_64, &var_2c, ebx, esi)
    var_8_4.b = 5
    sub_54d190(data_bac454 + 0x1be0, eax_16)
    var_8_4.b = 4
    
    if (var_60 != 0)
        bool cond:4_1 = var_60[1] != 1
        var_60[1]
        var_60[1] -= 1
        
        if (not(cond:4_1))
            (*(*var_60 + 4))(eax_2)
            int32_t edi_1 = var_60[2]
            var_60[2] -= 1
            
            if (edi_1 == 1)
                (*(*var_60 + 8))()
    
    int32_t var_8_5 = 0xffffffff
    
    if (var_18_3 u>= 8)
        j__free(var_2c.d)
    
    var_18_1 = 7
    var_2c = 0
    int32_t var_1c_4 = 0
    
    if (*(data_bac454 + 0x1be0) == 0)
        void** eax_22 = sub_6b9ed0(&var_44)
        int32_t var_8_6 = 6
        eax_15 = sub_548cb0(eax_22, u"Direct3D", &var_2c, eax_22)
        var_8_6.b = 7
        goto label_62edf1
    
    if (*(data_bac4a0 + 0xa8) s>= 2)
        int32_t var_18_4 = 7
        int32_t var_1c_5 = 0
        var_2c = 0
        sub_52e720(&var_2c, 0xaf5a34, 0xa)
        int32_t var_8_7 = 8
        void** eax_24 = sub_6a1200(&var_64, &var_2c, ebx, esi, 0, 0x401, 0x15, 0, 1)
        var_8_7.b = 9
        sub_54d190(data_bac454 + 0x1be8, eax_24)
        var_8_7.b = 8
        sub_54b010(&var_64)
        int32_t var_8_8 = 0xffffffff
        
        if (var_18_4 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_5 = 7
        var_2c = 0
        int32_t var_1c_6 = 0
        
        if (*(data_bac454 + 0x1be8) == 0)
            *(data_bac4a0 + 0xa8) = 1
            int16_t* eax_27 = sub_6b9ed0(&var_2c)
            int32_t var_8_9 = 0xa
            int16_t* eax_28 = sub_548cb0(eax_27, 0xaf5a50, &var_44, eax_27)
            var_8_9.b = 0xb
            sub_684160(data_bac424, 3, eax_28)
            sub_52e8a0(&var_44)
            int32_t var_8_10 = 0xffffffff
            sub_52e8a0(&var_2c)
    
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    int16_t var_5c = 0
    sub_52e720(&var_5c, u"Direct3D", 0x1a)
    int32_t var_8_11 = 0xc
    sub_684160(data_bac424, 5, &var_5c)
    
    if (var_48_1 u>= 8)
        j__free(var_5c.d)
    
    result.b = 1
else
    int16_t* eax_14 = sub_6b9ed0(&var_44)
    int32_t var_8_3 = 2
    eax_15 = sub_548cb0(eax_14, u"Direct3D", &var_2c, eax_14)
    var_8_3.b = 3
label_62edf1:
    sub_684160(data_bac424, 2, eax_15)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
