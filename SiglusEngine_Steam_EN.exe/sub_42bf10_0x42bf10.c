// 函数: sub_42bf10
// 地址: 0x42bf10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
char* eax_1 = __security_cookie ^ &__saved_ebp
char* var_c = eax_1

if (arg4 != 0)
    char var_218
    sub_4cfd70(&var_218, arg4)
    char* esi_1 = &var_218
    int32_t eax_2 = sub_4d1610(&var_218, 0x5c)
    void var_217
    
    if (eax_2 != 0xffffffff)
        esi_1 = &var_217 + eax_2
    int32_t eax_3 = sub_4d1610(esi_1, 0x2e)
    
    if (eax_3 == 0xffffffff)
        eax_3 = sub_4cfc80(esi_1)
        esi_1 -= 1
    
    void* const var_234_1 = &data_6142ac
    char* eax_4 = sub_4c84d0(&esi_1[eax_3], ".%s")
    int32_t esi_3 = data_703190.d
    void* eax_5
    uint32_t ecx_5
    eax_5, ecx_5 = sub_4c3da0(eax_4, 5, &var_218, 0x21)
    int32_t* var_220
    int32_t var_21c
    
    if (eax_5 != 1)
        if (esi_3 != 0xffffffff)
            eax_5, ecx_5 = sub_4c51f0(eax_5, &var_218, esi_3, nullptr)
        
        if (esi_3 == 0xffffffff || eax_5 == 0)
            int32_t var_234_2 = 1
            int32_t* eax_6 = sub_4254a0(eax_5, arg4, ecx_5, arg5, 0, 1, 0, 1)
            arg2[1] = eax_6
            
            if (eax_6 == 0xffffffff)
                arg2[0x15] = data_70300c
                int32_t eax_9 = data_7030dc
                arg2[0x16] = eax_9
                sub_5f02dd(var_c ^ &__saved_ebp)
                return eax_9
            
            *arg2 = 1
            int32_t eax_7 = sub_426690(eax_6, 0, eax_6, &var_21c, &var_220)
            int32_t edx_4 = var_21c
            int32_t* ecx_8 = var_220
            
            if (edx_4 s< data_70300c)
                edx_4 = data_70300c
            
            bool cond:1 = ecx_8 s< data_7030dc
            arg2[0x15] = edx_4
            
            if (cond:1)
                ecx_8 = data_7030dc
            
            arg2[0x16] = ecx_8
            sub_5f02dd(var_c ^ &__saved_ebp)
            return eax_7
    
    uint32_t var_234_4 = ecx_5
    int32_t var_238_2 = 0x21
    int32_t ecx_13 = data_703190.d
    var_220 = nullptr
    var_21c = 0
    eax_1 = sub_4c5340(&var_21c, &var_218, ecx_13, &var_21c, &var_220, ecx_5)
    
    if (var_21c != 0)
        if (data_7037e8 != 0)
            sub_419520(arg4, 1)
        
        int32_t* edx_6 = var_220
        arg2[4] = 1
        sub_42e190(&arg2[4], edx_6)
        
        if (arg2[4] != 0)
            sub_42eb80(&arg2[4])
            void* var_234_5 = &arg2[4]
            int32_t var_234_6 = 1
            int32_t var_238_3 = arg6
            sub_42e450(sub_42f170(&arg2[4], arg6), arg5, &arg2[4])
            *(arg3 + 0x60) = arg6
            *arg2 = 2
        
        eax_1 = sub_4d6c40(&var_21c, &var_220)

sub_5f02dd(var_c ^ &__saved_ebp)
return eax_1
