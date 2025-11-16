// 函数: sub_417194
// 地址: 0x417194
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t result_1 = 0
int32_t result

if (arg3 == 0 || arg4 == 0)
    result = 0x80004005
else
    void (* var_2a4)(int32_t* arg1) __noreturn
    void (** var_1e0)(int32_t* arg1) __noreturn = sub_466820(&var_2a4)
    var_2a4 = sub_417112
    int32_t (* var_29c_1)() = sub_52e8d0
    void var_220
    int32_t __saved_ebp
    int32_t esi
    __setjmp3(&__saved_ebp, esi, arg2, &var_220, 0, arg2, esi)
    sub_464990(&var_1e0, 0x3e, 0x1d8)
    int32_t var_1dc
    int32_t* eax_2 = (*var_1dc)(&var_1e0, 0, 0x24)
    int32_t* var_1c8_1 = eax_2
    eax_2[8] = arg4
    eax_2[2] = sub_52e8d0
    eax_2[3] = sub_417160
    eax_2[4] = sub_41717d
    eax_2[5] = sub_4664e0
    eax_2[6] = sub_52e8d0
    eax_2[1] = 0
    *eax_2 = 0
    eax_2[7] = arg3
    sub_464d80(&var_1e0, 1)
    
    if (sub_41611a() == 0)
        int32_t var_198_1 = 1
    
    int32_t (__stdcall* var_29c_2)(int32_t* arg1) = sub_417131
    sub_4648b0(&var_1e0)
    int32_t var_164
    int32_t var_170
    int32_t eax_8
    int32_t* esi_1
    
    if (var_164 == 1)
        esi_1 = arg1
        eax_8 = var_170
        *esi_1 = 0x32
        esi_1[0xc] = eax_8
    label_4172dd:
        bool cond:4_1 = esi_1[0x10] == 0
        esi_1[3] = eax_8
        esi_1[0xd] = 0
        int32_t var_16c
        esi_1[4] = var_16c
        esi_1[5] = 1
        
        if (not(cond:4_1))
            uint32_t ecx_6 = esi_1[0xc] * var_16c
            esi_1[0xe] = 1
            int32_t eax_10 = sub_745f3f(ecx_6)
            esi_1[1] = eax_10
            int32_t* eax_14
            
            if (eax_10 != 0)
                eax_14 = (*(var_1dc + 8))(&var_1e0, 1, var_170 * var_164, 1)
            
            if (eax_10 == 0 || eax_14 == 0)
                result_1 = 0x8007000e
            else
                int32_t eax_15 = *esi_1
                int32_t var_154
                
                if (eax_15 == 0x32)
                    int32_t ebx = esi_1[1]
                    
                    if (var_154 u< var_16c)
                        do
                            sub_464820(&var_1e0, eax_14, 1)
                            int32_t esi_3
                            int32_t edi_1
                            edi_1, esi_3 = __builtin_memcpy(ebx, *eax_14, var_170 u>> 2 << 2)
                            __builtin_memcpy(edi_1, esi_3, var_170 & 3)
                            ebx += var_170
                        while (var_154 u< var_16c)
                    
                    result_1 = 0
                else if (eax_15 == 0x16)
                    uint32_t* esi_4 = esi_1[1]
                    
                    while (var_154 u< var_16c)
                        sub_464820(&var_1e0, eax_14, 1)
                        void* eax_21 = *eax_14
                        void* ecx_13 = &esi_4[var_170]
                        
                        if (esi_4 u< ecx_13)
                            do
                                *(eax_21 + 1)
                                uint32_t edx_1
                                edx_1:1.b = *eax_21
                                uint32_t ebx_1 = zx.d(*(eax_21 + 2))
                                eax_21 += 3
                                *esi_4 = edx_1 << 8 | ebx_1
                                esi_4 = &esi_4[1]
                            while (esi_4 u< ecx_13)
                            
                            result_1 = 0
                sub_464cc0(&var_1e0)
    else
        if (var_164 == 3)
            eax_8 = var_170
            esi_1 = arg1
            *esi_1 = 0x16
            esi_1[0xc] = eax_8 << 2
            goto label_4172dd
        
        result_1 = 0x80004005
    void (*** var_2bc_5)(int32_t* arg1) __noreturn = &var_1e0
    sub_464a80()
    result = result_1

sub_745f2b(__security_cookie_1)
return result
