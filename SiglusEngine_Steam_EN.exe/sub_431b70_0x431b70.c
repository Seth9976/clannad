// 函数: sub_431b70
// 地址: 0x431b70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx_1 = arg1 << 7
char var_214
void var_213

if (*(ebx_1 + 0x1305c70) != 0)
    sub_4cfd70(&var_214, ebx_1 + 0x1305c70)
    char* esi_1 = &var_214
    int32_t eax_3 = sub_4d1610(&var_214, 0x5c)
    
    if (eax_3 != 0xffffffff)
        esi_1 = &var_213 + eax_3
    
    int32_t eax_4 = sub_4d1610(esi_1, 0x2e)
    
    if (eax_4 == 0xffffffff)
        eax_4 = sub_4cfc80(esi_1)
        esi_1 -= 1
    
    void* const var_228_1 = &data_6141e8
    char* eax_5 = sub_4c84d0(&esi_1[eax_4], ".%s")
    int32_t esi_3 = data_703190:4
    int32_t eax_6 = sub_4c3da0(eax_5, 5, &var_214, 0x22)
    
    if (eax_6 != 1)
        void* eax_7
        
        if (esi_3 != 0xffffffff)
            eax_7 = sub_4c51f0(eax_6, &var_214, esi_3, nullptr)
        
        if (esi_3 == 0xffffffff || eax_7 == 0)
            if (arg2 == 0)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return 0
            
            sub_4cfd70(arg2, ebx_1 + 0x1305c70)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0

if (*(ebx_1 + &data_1305c94) != 0)
    sub_4cfd70(&var_214, ebx_1 + &data_1305c94)
    char* esi_4 = &var_214
    int32_t eax_9 = sub_4d1610(&var_214, 0x5c)
    
    if (eax_9 != 0xffffffff)
        esi_4 = &var_213 + eax_9
    
    int32_t eax_10 = sub_4d1610(esi_4, 0x2e)
    
    if (eax_10 == 0xffffffff)
        eax_10 = sub_4cfc80(esi_4)
        esi_4 -= 1
    
    void* const var_228_2 = &data_6142d8
    char* eax_11 = sub_4c84d0(&esi_4[eax_10], ".%s")
    int32_t esi_6 = data_703190:0xc
    int32_t eax_12 = sub_4c3da0(eax_11, 5, &var_214, 0xd)
    
    if (eax_12 != 1)
        void* eax_13
        
        if (esi_6 != 0xffffffff)
            eax_13 = sub_4c51f0(eax_12, &var_214, esi_6, nullptr)
        
        if (esi_6 == 0xffffffff || eax_13 == 0)
            if (arg2 == 0)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return 0
            
            sub_4cfd70(arg2, ebx_1 + &data_1305c94)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
