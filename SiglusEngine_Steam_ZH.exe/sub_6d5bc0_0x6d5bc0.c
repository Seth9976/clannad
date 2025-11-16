// 函数: sub_6d5bc0
// 地址: 0x6d5bc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx
ebx.b = arg2[1].b != 8
int32_t eax_3 = arg2[3] * ((ebx << 2) + 6)
char var_64[0x50]
int32_t eax_5 = sub_6cf060(&var_64, *arg2, arg1, &var_64)
int32_t var_68 = eax_5

if (eax_5 == 0)
    sub_6d42e0(arg1, "sPLT: invalid keyword")
    noreturn

int32_t eax_6 = eax_5 + eax_3 + 2
sub_6d4aa0(eax_6, 0x73504c54, arg1, eax_6)

if (arg1 == 0)
    goto label_6d5c80

if (var_68 == 0xffffffff)
    goto label_6d5c55

int32_t ecx_3 = *(arg1 + 0x58)

if (ecx_3 != 0)
    ecx_3(arg1, &var_64, var_68 + 1)
    sub_6caa70(var_68 + 1, &var_64, arg1, var_68 + 1)
label_6d5c55:
    
    if (arg1 == 0)
        goto label_6d5c80
    
    void* ecx_5 = &arg2[1]
    
    if (ecx_5 == 0)
        goto label_6d5c83
    
    int32_t eax_11 = *(arg1 + 0x58)
    
    if (eax_11 != 0)
        sub_6caa70(eax_11(arg1, ecx_5, 1), &arg2[1], arg1, 1)
    label_6d5c80:
        ecx_5 = &arg2[1]
    label_6d5c83:
        void* edx_3 = arg2[2]
        void* result = edx_3 + arg2[3] * 0xa
        
        if (edx_3 u< result)
            char* edi_1 = edx_3 + 4
            int32_t* edx_4 = arg2
            void* ecx_7 = ecx_5
            
            while (true)
                uint8_t var_14
                
                if (*ecx_7 != 8)
                    uint32_t ecx_9 = zx.d(*(edi_1 - 4))
                    char var_13_2 = ecx_9.b
                    var_14 = (ecx_9 u>> 8).b
                    uint32_t ecx_10 = zx.d(*(edi_1 - 2))
                    char var_11_2 = ecx_10.b
                    uint8_t var_12_2 = (ecx_10 u>> 8).b
                    uint32_t ecx_11 = zx.d(*edi_1)
                    char var_f_2 = ecx_11.b
                    uint8_t var_10_2 = (ecx_11 u>> 8).b
                    uint32_t ecx_12 = zx.d(*(edi_1 + 2))
                    char var_d_1 = ecx_12.b
                    uint8_t var_e_1 = (ecx_12 u>> 8).b
                    uint32_t ecx_13 = zx.d(*(edi_1 + 4))
                    char var_b_1 = ecx_13.b
                    uint8_t var_c_1 = (ecx_13 u>> 8).b
                else
                    var_14 = edi_1[0xfffffffc]
                    char var_13_1 = edi_1[0xfffffffe]
                    char var_12_1 = *edi_1
                    char var_11_1 = edi_1[2]
                    uint32_t ecx_8 = zx.d(*(edi_1 + 4))
                    char var_f_1 = ecx_8.b
                    uint8_t var_10_1 = (ecx_8 u>> 8).b
                
                if (arg1 != 0 && ebx << 2 != 0xfffffffa)
                    int32_t eax_31 = *(arg1 + 0x58)
                    
                    if (eax_31 == 0)
                        goto label_6d5dcb
                    
                    sub_6caa70(eax_31(arg1, &var_14, (ebx << 2) + 6), &var_14, arg1, (ebx << 2) + 6)
                    edx_4 = arg2
                
                edi_1 = &edi_1[0xa]
                result = &edi_1[0xfffffffc]
                
                if (result u>= edx_4[2] + edx_4[3] * 0xa)
                    break
                
                ecx_7 = &edx_4[1]
        
        if (arg1 == 0)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return result
        
        int32_t ecx_17 = *(arg1 + 0x138)
        var_68.b = (ecx_17 u>> 0x18).b
        var_68:1.b = (ecx_17 u>> 0x10).b
        var_68:2.b = (ecx_17 u>> 8).b
        int32_t eax_41 = *(arg1 + 0x58)
        *(arg1 + 0x2a4) = 0x82
        var_68:3.b = ecx_17.b
        
        if (eax_41 != 0)
            result = eax_41(arg1, &var_68, 4)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return result

label_6d5dcb:
sub_6d42e0(arg1, "Call to NULL write function")
noreturn
