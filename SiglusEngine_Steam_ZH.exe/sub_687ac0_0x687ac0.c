// 函数: sub_687ac0
// 地址: 0x687ac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c81d1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_4c = arg1
int32_t var_40 = 0
void** var_38
sub_6880f0(&var_38, arg2)
void** eax_4 = var_38

if (eax_4 == data_4ebe324)
    int32_t var_20_1 = 7
    int32_t var_24_1 = 0
    int16_t var_34 = 0
    int32_t var_1c_1 = 0
    int32_t* var_18_1 = nullptr
    int32_t var_8_1 = 1
    int32_t* eax_5
    int32_t* ecx_3
    eax_5, ecx_3 = sub_745f3f(0x24)
    
    if (eax_5 == 0)
        eax_5 = nullptr
    else
        eax_5[5] = 7
        eax_5[4] = 0
        *eax_5 = 0
        eax_5[6] = 0
        eax_5[7] = 0
        eax_5[8] = 0
    
    var_38 = nullptr
    var_8_1.b = 2
    void*** var_60_1 = &var_38
    sub_6883b0(eax_5, eax_5, ecx_3)
    var_8_1.b = 3
    void** esi_1 = nullptr
    void** ecx_4 = var_38
    var_38 = nullptr
    int32_t var_3c_2 = 0
    
    if (var_18_1 != 0)
        bool cond:0_1 = var_18_1[1] != 1
        var_18_1[1] -= 1
        
        if (not(cond:0_1))
            (*(*var_18_1 + 4))(eax_2)
            bool cond:2_1 = var_18_1[2] != 1
            var_18_1[2]
            var_18_1[2] -= 1
            
            if (not(cond:2_1))
                (*(*var_18_1 + 8))()
        
        esi_1 = var_38
    
    var_8_1.b = 1
    
    if (esi_1 != 0)
        bool cond:1_1 = esi_1[1] != 1
        esi_1[1]
        esi_1[1] -= 1
        
        if (not(cond:1_1))
            (*(*esi_1 + 4))(eax_2)
            int32_t ecx_9 = esi_1[2]
            esi_1[2] -= 1
            
            if (ecx_9 == 1)
                (*(*esi_1 + 8))()
    
    if (sub_687130(eax_5, arg2) != 0)
        if (&var_34 != arg2)
            sub_52e3c0(&var_34, arg2, 0, 0xffffffff)
        
        int32_t* eax_16
        void* ecx_14
        eax_16, ecx_14 = sub_688420(&var_34)
        int32_t* var_60_4 = eax_16
        void* var_64_1 = &eax_16[4]
        void* var_48
        sub_6884e0(&var_48, ecx_14)
        int32_t ecx_15 = data_4ebe32c
        
        if (ecx_15 s< data_4ebe328)
            ecx_15 = data_4ebe328
        
        data_4ebe32c = ecx_15
        *arg1 = eax_5
        arg1[1] = ecx_4
        
        if (ecx_4 != 0)
            ecx_4[1]
            ecx_4[1] += 1
    else
        *arg1 = 0
        arg1[1] = 0
    
    int32_t var_40_1 = 1
    var_8_1.b = 0
    sub_687cd0(&var_34)
else
    *arg1 = eax_4[0xa]
    void* ecx_1 = eax_4[0xb]
    arg1[1] = ecx_1
    
    if (ecx_1 != 0)
        *(ecx_1 + 4)
        *(ecx_1 + 4) += 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
