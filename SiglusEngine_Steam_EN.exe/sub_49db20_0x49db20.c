// 函数: sub_49db20
// 地址: 0x49db20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_4ac
int32_t eax_1 = __security_cookie ^ &var_4ac
var_4ac = arg6
int32_t var_4a8 = arg9

if (arg3 != 0)
    sub_49d230(arg6, arg4, arg3, arg5, arg6, arg7, arg8, arg10, arg12, arg13, arg14, arg15, arg16)

data_1af1720 = arg15
data_1af171c = arg16

if (arg2 u<= 0x3f)
    WaitForSingleObject(data_641b54, 0xffffffff)
    sub_4c29d0(arg2)
    ReleaseSemaphore(data_641b54, 1, nullptr)

int32_t eax_5 = var_4a8
int32_t esi_1

if (eax_5 == 0)
    char* edx_4 = var_4ac
    
    if (edx_4 == 0)
        sub_5f02dd(eax_1 ^ &var_4ac)
        return eax_5
    
    char var_4a0[0x208]
    sub_4cfdf0(eax_5, edx_4, &var_4a0, 0x1fe)
    char (* ecx_12)[0x208] = &var_4a0
    void var_298
    
    if (sub_4c3da0(sub_4c3960(&var_4a0, &data_61737c), arg7, &var_4a0, arg8) != 1)
        char* ecx_15 = &var_4a0
        
        if (sub_4c3da0(sub_4c3960(ecx_12, &data_617380), arg7, &var_4a0, arg8) != 1)
            char* ecx_18 = &var_4a0
            
            if (sub_4c3da0(sub_4c3960(ecx_15, &data_617384), arg7, &var_4a0, arg8) != 1)
                sub_4c3960(ecx_18, &data_61737c)
                int32_t var_4c4_5
                int32_t var_4c0_8
                
                if (sub_4c5530(arg5) != 1)
                    sub_4c3960(&var_4a0, &data_617380)
                    
                    if (sub_4c5530(arg5) != 1)
                        sub_4c3960(&var_4a0, &data_617384)
                        
                        if (sub_4c5530(arg5) != 1)
                            sub_4c3960(&var_4a0, 0)
                            char (* var_4bc_22)[0x208] = &var_4a0
                            sub_55fa50(sub_4c84d0(&data_7027c0, "%s.nwa ( wav ) "), &data_7027c0, 
                                0x613340, 1, 0xffffffff)
                            eax_5 = sub_446a50()
                            sub_5f02dd(eax_1 ^ &var_4ac)
                            return eax_5
                        
                        eax_5 =
                            sub_4c5550(&var_298, &var_4a0, arg5, arg7, &var_298, &var_4ac, &var_4a8)
                        
                        if (arg2 s>= 0xfffffffb)
                            int32_t var_4bc_18 = 0
                            var_4c0_8 = 0xffffffff
                            var_4c4_5 = 0
                            goto label_49de67
                        
                        esi_1 = 0xfffffffc
                    else
                        eax_5 =
                            sub_4c5550(&var_298, &var_4a0, arg5, arg7, &var_298, &var_4ac, &var_4a8)
                        
                        if (arg2 s< 0xfffffffb)
                            esi_1 = 0xfffffffc
                        else
                            char (* var_4bc_16)[0x208] = &var_4a0
                            eax_5 = var_4ac
                            eax_5 = sub_4c27f0(eax_5, &var_298, arg2, var_4a8, eax_5, 2, eax_5)
                            esi_1 = eax_5
                else
                    eax_5 = sub_4c5550(&var_298, &var_4a0, arg5, arg7, &var_298, &var_4ac, &var_4a8)
                    
                    if (arg2 s< 0xfffffffb)
                        esi_1 = 0xfffffffc
                    else
                        int32_t var_4bc_14 = 0
                        var_4c0_8 = 0xffffffff
                        var_4c4_5 = 1
                    label_49de67:
                        eax_5 = sub_4c27f0(eax_5, &var_298, arg2, var_4a8, var_4ac, var_4c4_5, 
                            var_4c0_8)
                        esi_1 = eax_5
            else
                eax_5 = sub_4c36f0(&var_298, arg7, ecx_18, arg8, &var_298)
                
                if (arg2 s< 0xfffffffb)
                    esi_1 = 0xfffffffc
                else
                    int32_t var_4bc_12 = 0
                    eax_5 = sub_4c27f0(eax_5, &var_298, arg2, 0, 0xffffffff, 0, 0xffffffff)
                    esi_1 = eax_5
        else
            eax_5 = sub_4c36f0(&var_298, arg7, ecx_15, arg8, &var_298)
            
            if (arg2 s< 0xfffffffb)
                esi_1 = 0xfffffffc
            else
                int32_t var_4bc_9 = 0
                eax_5 = sub_4c27f0(eax_5, &var_298, arg2, 0, 0xffffffff, 2, 0xffffffff)
                esi_1 = eax_5
    else
        eax_5 = sub_4c36f0(&var_298, arg7, ecx_12, arg8, &var_298)
        
        if (arg2 s< 0xfffffffb)
            esi_1 = 0xfffffffc
        else
            int32_t var_4bc_6 = 0
            eax_5 = sub_4c27f0(eax_5, &var_298, arg2, 0, 0xffffffff, 1, 0xffffffff)
            esi_1 = eax_5
    data_20740d4 = esi_1
    
    if (esi_1 s< 0)
        if (data_641b00 s< 2)
            if (esi_1 == 0xfffffffc)
                char (* var_4bc_21)[0x208] = &var_4a0
                sub_4c84d0(&data_7027c0, "%s \n")
                enum MESSAGEBOX_RESULT eax_28 =
                    MessageBoxA(data_7027bc, &data_7027c0, 0x61b2e0, MB_OK)
                data_641b00 += 1
                sub_5f02dd(eax_1 ^ &var_4ac)
                return eax_28
            
            if (esi_1 == 0xfffffffd)
                char (* var_4bc_20)[0x208] = &var_4a0
                sub_4c84d0(&data_7027c0, "%s \nDirectSound")
                enum MESSAGEBOX_RESULT eax_27 =
                    MessageBoxA(data_7027bc, &data_7027c0, 0x61b2e0, MB_OK)
                data_641b00 += 1
                sub_5f02dd(eax_1 ^ &var_4ac)
                return eax_27
            
            if (esi_1 == 0xfffffffe)
                char (* var_4bc_19)[0x208] = &var_4a0
                sub_4c84d0(&data_7027c0, "%s \n")
                enum MESSAGEBOX_RESULT eax_26 =
                    MessageBoxA(data_7027bc, &data_7027c0, 0x61b2e0, MB_OK)
                data_641b00 += 1
                sub_5f02dd(eax_1 ^ &var_4ac)
                return eax_26
        
        sub_5f02dd(eax_1 ^ &var_4ac)
        return eax_5
else
    eax_5 = sub_4c28f0(arg2, eax_5)
    esi_1 = eax_5
    data_20740d4 = esi_1
    
    if (esi_1 s< 0)
        sub_5f02dd(eax_1 ^ &var_4ac)
        return eax_5

sub_49d3a0(eax_5, esi_1, arg3, arg17)
int32_t eax_6 = arg11
int32_t ecx_5

if (eax_6 s<= 0)
    eax_6 = 0
    ecx_5 = 0xff
else
    ecx_5 = 0

int32_t var_4bc_3 = ecx_5
int32_t eax_10 = sub_4c2c40(arg13, arg12, esi_1, arg13, arg14, arg10, eax_6, ecx_5)
sub_5f02dd(eax_1 ^ &var_4ac)
return eax_10
