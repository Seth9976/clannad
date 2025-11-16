// 函数: sub_6d5730
// 地址: 0x6d5730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (*(arg3 + 0x80) != 0x49444154)
    int32_t* edx = *(arg3 + 0xbc)
    
    if (edx != 0)
        sub_6d50b0(arg3, edx)
    else
        int32_t* eax = sub_6d8320(arg3, *(arg3 + 0xc0) + 4)
        *(arg3 + 0xbc) = eax
        *eax = 0
    
    int32_t eax_1 = sub_6d4c60(arg3)
    
    if (sub_6d4e40(eax_1, 0x49444154, arg3, eax_1) != 0)
        sub_6d42e0(arg3, *(arg3 + 0x9c))
        noreturn
    
    *(arg3 + 0x90) = *(arg3 + 0xbc) + 4
    *(arg3 + 0x94) = *(arg3 + 0xc0)

int32_t ebx = arg4
int32_t* ecx_2 = arg3 + 0x84
*ecx_2 = arg2
void* edi_1 = arg5
*(arg3 + 0x88) = 0
void* result

while (true)
    int32_t eax_6 = 0xffffffff
    void* edx_3 = edi_1
    
    if (ebx u< 0xffffffff)
        eax_6 = ebx
    
    int32_t ebx_1 = ebx - eax_6
    *(arg3 + 0x88) = eax_6
    
    if (ebx_1 != 0)
        edx_3 = nullptr
    
    result = sub_722b90(ecx_2, edx_3)
    ebx = ebx_1 + *(arg3 + 0x88)
    bool cond:0_1 = *(arg3 + 0x94) != 0
    void* result_1 = result
    *(arg3 + 0x88) = 0
    
    if (not(cond:0_1))
        int32_t ebx_2 = *(arg3 + 0xc0)
        char* edi_3 = *(arg3 + 0xbc) + 4
        
        if ((*(arg3 + 0x74) & 4) == 0 && *(arg3 + 0x26c) == 0)
            result = sub_6d4dc0(edi_3, sub_6d4c60(arg3))
        
        if (ebx_2 u> 0x7fffffff)
            sub_6d42e0(arg3, "length exceeds PNG maximum")
            noreturn
        
        sub_6d4aa0(result, 0x49444154, arg3, ebx_2)
        
        if (edi_3 != 0 && ebx_2 != 0)
            int32_t eax_8 = *(arg3 + 0x58)
            
            if (eax_8 == 0)
                sub_6d42e0(arg3, "Call to NULL write function")
                noreturn
            
            sub_6caa70(eax_8(arg3, edi_3, ebx_2), edi_3, arg3, ebx_2)
        
        sub_6d4bb0(arg3)
        *(arg3 + 0x74) |= 4
        result = result_1
        *(arg3 + 0x90) = edi_3
        edi_1 = arg5
        *(arg3 + 0x94) = ebx_2
        
        if (result != 0)
            goto label_6d58d2
        
        ecx_2 = arg3 + 0x84
        
        if (edi_1 != 0)
            continue
    else if (result != 0)
    label_6d58d2:
        
        if (result != 1 || edi_1 != 4)
            sub_6cb6b0(arg3, result)
            sub_6d42e0(arg3, *(arg3 + 0x9c))
            noreturn
        
        char* edi_5 = *(arg3 + 0xbc) + 4
        int32_t ebx_4 = *(arg3 + 0xc0) - *(arg3 + 0x94)
        
        if ((*(arg3 + 0x74) & 4) == 0 && *(arg3 + 0x26c) == 0)
            result = sub_6d4dc0(edi_5, sub_6d4c60(arg3))
        
        result = sub_6d4c10(result, 0x49444154, arg3, edi_5, ebx_4)
        *(arg3 + 0x94) = 0
        *(arg3 + 0x74) |= 0xc
        *(arg3 + 0x90) = 0
        *(arg3 + 0x80) = 0
        break
    
    if (ebx == 0)
        if (edi_1 != 4)
            break
        
        sub_6d42e0(arg3, "Z_OK on Z_FINISH with output space")
        noreturn
    
    ecx_2 = arg3 + 0x84

return result
