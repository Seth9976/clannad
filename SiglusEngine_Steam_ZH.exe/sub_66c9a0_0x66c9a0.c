// 函数: sub_66c9a0
// 地址: 0x66c9a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c64c9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
int32_t var_2c = 4
int32_t* eax_3 = sub_66f630(&var_2c, 3)
int32_t var_8_1 = 0

if (arg1 != eax_3)
    sub_670c00(arg1)
    int32_t* var_18_1 = arg1
    var_8_1.b = 1
    
    if (arg1 != 0)
        sub_6703f0(arg1, eax_3)

int32_t var_8_2 = 0xffffffff
sub_670c00(&var_2c)
int32_t* esi_1 = arg1[2]
int32_t* result

while (true)
    if (arg2[3].b == 0)
        char* ecx_4 = *arg2
        
        if (ecx_4 != arg2[1])
            if (arg2[2] == 0xa)
                arg2[4] += 1
            
            arg2[2] = zx.d(*ecx_4)
            *arg2 = &ecx_4[1]
            goto label_66ca4b
        
        arg2[2] = 0xffffffff
    else
        arg2[3].b = 0
    label_66ca4b:
        result = arg2[2]
        
        if (result s>= 0x20)
            if (result == 0x22)
                result.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            if (result != 0x5c)
                int32_t edx_9 = esi_1[5]
                int32_t* ebx_1
                
                if (edx_9 u< 0x10)
                    ebx_1 = esi_1
                else
                    ebx_1 = *esi_1
                
                char* eax_33 = esi_1[4] + ebx_1
                int32_t* edx_10
                
                if (edx_9 u< 0x10)
                    edx_10 = esi_1
                else
                    edx_10 = *esi_1
                
                if (eax_33 != 0)
                    sub_66f7b0(esi_1, eax_33 - edx_10, 1, result.b)
                    continue
                else
                    sub_66f7b0(esi_1, eax_33, 1, result.b)
                    continue
            else
                if (arg2[3].b == 0)
                    char* ecx_6 = *arg2
                    
                    if (ecx_6 == arg2[1])
                        arg2[2] = 0xffffffff
                        result.b = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
                    
                    if (result == 0xa)
                        arg2[4] += 1
                    
                    arg2[2] = zx.d(*ecx_6)
                    *arg2 = &ecx_6[1]
                    result = arg2[2]
                else
                    arg2[3].b = 0
                
                if (result == 0xffffffff)
                    break
                
                if (result - 0x22 u> 0x53)
                    break
                
                switch (result + &jump_table_66cda8[1]:2)
                    case &lookup_table_66cdd0
                        int32_t ecx_7 = esi_1[5]
                        int32_t* edx
                        
                        if (ecx_7 u< 0x10)
                            edx = esi_1
                        else
                            edx = *esi_1
                        
                        char* eax_9 = esi_1[4] + edx
                        int32_t* ecx_8
                        
                        if (ecx_7 u< 0x10)
                            ecx_8 = esi_1
                        else
                            ecx_8 = *esi_1
                        
                        if (eax_9 != 0)
                            sub_66f7b0(esi_1, eax_9 - ecx_8, 1, 0x22)
                            continue
                        else
                            sub_66f7b0(esi_1, eax_9, 1, 0x22)
                            continue
                    case &lookup_table_66cdd0[1], &lookup_table_66cdd0[2], &lookup_table_66cdd0[3], 
                            &lookup_table_66cdd0[4], &lookup_table_66cdd0[5], 
                            &lookup_table_66cdd0[6], &lookup_table_66cdd0[7], 
                            &lookup_table_66cdd0[8], &lookup_table_66cdd0[9], 
                            &lookup_table_66cdd0[0xa], &lookup_table_66cdd0[0xb], 
                            &lookup_table_66cdd0[0xc], &lookup_table_66cdd0[0xe], 
                            &lookup_table_66cdd0[0xf], &lookup_table_66cdd0[0x10], 
                            &lookup_table_66cdd0[0x11], &lookup_table_66cdd0[0x12], 
                            &lookup_table_66cdd0[0x13], &lookup_table_66cdd0[0x14], 
                            &lookup_table_66cdd0[0x15], &lookup_table_66cdd0[0x16], 
                            &lookup_table_66cdd0[0x17], &lookup_table_66cdd0[0x18], 
                            &lookup_table_66cdd0[0x19], &lookup_table_66cdd0[0x1a], 
                            &lookup_table_66cdd0[0x1b], &lookup_table_66cdd0[0x1c], 
                            &lookup_table_66cdd0[0x1d], &lookup_table_66cdd0[0x1e], 
                            &lookup_table_66cdd0[0x1f], &lookup_table_66cdd0[0x20], 
                            &lookup_table_66cdd0[0x21], &lookup_table_66cdd0[0x22], 
                            &lookup_table_66cdd0[0x23], &lookup_table_66cdd0[0x24], 
                            &lookup_table_66cdd0[0x25], &lookup_table_66cdd0[0x26], 
                            &lookup_table_66cdd0[0x27], &lookup_table_66cdd0[0x28], 
                            &lookup_table_66cdd0[0x29], &lookup_table_66cdd0[0x2a], 
                            &lookup_table_66cdd0[0x2b], &lookup_table_66cdd0[0x2c], 
                            &lookup_table_66cdd0[0x2d], &lookup_table_66cdd0[0x2e], 
                            &lookup_table_66cdd0[0x2f], &lookup_table_66cdd0[0x30], 
                            &lookup_table_66cdd0[0x31], &lookup_table_66cdd0[0x32], 
                            &lookup_table_66cdd0[0x33], &lookup_table_66cdd0[0x34], 
                            &lookup_table_66cdd0[0x35], &lookup_table_66cdd0[0x36], 
                            &lookup_table_66cdd0[0x37], &lookup_table_66cdd0[0x38], 
                            &lookup_table_66cdd0[0x39], &lookup_table_66cdd0[0x3b], 
                            &lookup_table_66cdd0[0x3c], &lookup_table_66cdd0[0x3d], 
                            &lookup_table_66cdd0[0x3e], &lookup_table_66cdd0[0x3f], 
                            &lookup_table_66cdd0[0x41], &lookup_table_66cdd0[0x42], 
                            &lookup_table_66cdd0[0x43], &lookup_table_66cdd0[0x45], 
                            &lookup_table_66cdd0[0x46], &lookup_table_66cdd0[0x47], 
                            &lookup_table_66cdd0[0x48], &lookup_table_66cdd0[0x49], 
                            &lookup_table_66cdd0[0x4a], &lookup_table_66cdd0[0x4b], 
                            &lookup_table_66cdd0[0x4d], &lookup_table_66cdd0[0x4e], 
                            &lookup_table_66cdd0[0x4f], &lookup_table_66cdd0[0x51]
                        break
                    case &lookup_table_66cdd0[0xd]
                        int32_t ecx_15 = esi_1[5]
                        int32_t* edx_2
                        
                        if (ecx_15 u< 0x10)
                            edx_2 = esi_1
                        else
                            edx_2 = *esi_1
                        
                        char* eax_15 = esi_1[4] + edx_2
                        int32_t* ecx_16
                        
                        if (ecx_15 u< 0x10)
                            ecx_16 = esi_1
                        else
                            ecx_16 = *esi_1
                        
                        if (eax_15 != 0)
                            sub_66f7b0(esi_1, eax_15 - ecx_16, 1, 0x2f)
                            continue
                        else
                            sub_66f7b0(esi_1, eax_15, 1, 0x2f)
                            continue
                    case &lookup_table_66cdd0[0x3a]
                        int32_t ecx_11 = esi_1[5]
                        int32_t* edx_1
                        
                        if (ecx_11 u< 0x10)
                            edx_1 = esi_1
                        else
                            edx_1 = *esi_1
                        
                        char* eax_12 = esi_1[4] + edx_1
                        int32_t* ecx_12
                        
                        if (ecx_11 u< 0x10)
                            ecx_12 = esi_1
                        else
                            ecx_12 = *esi_1
                        
                        if (eax_12 != 0)
                            sub_66f7b0(esi_1, eax_12 - ecx_12, 1, 0x5c)
                            continue
                        else
                            sub_66f7b0(esi_1, eax_12, 1, 0x5c)
                            continue
                    case &lookup_table_66cdd0[0x40]
                        int32_t ecx_19 = esi_1[5]
                        int32_t* edx_3
                        
                        if (ecx_19 u< 0x10)
                            edx_3 = esi_1
                        else
                            edx_3 = *esi_1
                        
                        char* eax_18 = esi_1[4] + edx_3
                        int32_t* ecx_20
                        
                        if (ecx_19 u< 0x10)
                            ecx_20 = esi_1
                        else
                            ecx_20 = *esi_1
                        
                        if (eax_18 != 0)
                            sub_66f7b0(esi_1, eax_18 - ecx_20, 1, 8)
                            continue
                        else
                            sub_66f7b0(esi_1, eax_18, 1, 8)
                            continue
                    case &lookup_table_66cdd0[0x44]
                        int32_t ecx_23 = esi_1[5]
                        int32_t* edx_4
                        
                        if (ecx_23 u< 0x10)
                            edx_4 = esi_1
                        else
                            edx_4 = *esi_1
                        
                        char* eax_21 = esi_1[4] + edx_4
                        int32_t* ecx_24
                        
                        if (ecx_23 u< 0x10)
                            ecx_24 = esi_1
                        else
                            ecx_24 = *esi_1
                        
                        if (eax_21 != 0)
                            sub_66f7b0(esi_1, eax_21 - ecx_24, 1, 0xc)
                            continue
                        else
                            sub_66f7b0(esi_1, eax_21, 1, 0xc)
                            continue
                    case &lookup_table_66cdd0[0x4c]
                        int32_t ecx_27 = esi_1[5]
                        int32_t* edx_5
                        
                        if (ecx_27 u< 0x10)
                            edx_5 = esi_1
                        else
                            edx_5 = *esi_1
                        
                        char* eax_24 = esi_1[4] + edx_5
                        int32_t* ecx_28
                        
                        if (ecx_27 u< 0x10)
                            ecx_28 = esi_1
                        else
                            ecx_28 = *esi_1
                        
                        if (eax_24 != 0)
                            sub_66f7b0(esi_1, eax_24 - ecx_28, 1, 0xa)
                            continue
                        else
                            sub_66f7b0(esi_1, eax_24, 1, 0xa)
                            continue
                    case &lookup_table_66cdd0[0x50]
                        int32_t ecx_31 = esi_1[5]
                        int32_t* edx_6
                        
                        if (ecx_31 u< 0x10)
                            edx_6 = esi_1
                        else
                            edx_6 = *esi_1
                        
                        char* eax_27 = esi_1[4] + edx_6
                        int32_t* ecx_32
                        
                        if (ecx_31 u< 0x10)
                            ecx_32 = esi_1
                        else
                            ecx_32 = *esi_1
                        
                        if (eax_27 != 0)
                            sub_66f7b0(esi_1, eax_27 - ecx_32, 1, 0xd)
                            continue
                        else
                            sub_66f7b0(esi_1, eax_27, 1, 0xd)
                            continue
                    case &lookup_table_66cdd0[0x52]
                        int32_t ecx_35 = esi_1[5]
                        int32_t* edx_7
                        
                        if (ecx_35 u< 0x10)
                            edx_7 = esi_1
                        else
                            edx_7 = *esi_1
                        
                        char* eax_30 = esi_1[4] + edx_7
                        int32_t* ecx_36
                        
                        if (ecx_35 u< 0x10)
                            ecx_36 = esi_1
                        else
                            ecx_36 = *esi_1
                        
                        if (eax_30 != 0)
                            sub_66f7b0(esi_1, eax_30 - ecx_36, 1, 9)
                            continue
                        else
                            sub_66f7b0(esi_1, eax_30, 1, 9)
                            continue
                    case &lookup_table_66cdd0[0x53]
                        result = sub_66df20(esi_1, arg2)
                        
                        if (result.b != 0)
                            continue
                        
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
    
    if (arg2[2] == 0xffffffff)
        break
    
    arg2[3].b = 1
    break

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
