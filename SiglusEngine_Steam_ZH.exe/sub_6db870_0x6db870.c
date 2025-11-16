// 函数: sub_6db870
// 地址: 0x6db870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t ebx = 0
int32_t edi_1

if (*(arg3 + 0x230) == 0)
    edi_1 = arg5
    
    if (edi_1 == 0)
        edi_1 = *(arg3 + 0x234)
    
    if (edi_1 == 3 || (edi_1 == 2 && (*(arg3 + 0x11c) & 0x20000000) != 0))
        if (sub_6db700(arg3, arg4) != 0)
            goto label_6db928
    else
        sub_6d8610(arg3, arg4)
    label_6db928:
        
        if (edi_1 == 3)
        label_6db93e:
            int32_t ecx_2 = *(arg3 + 0x278)
            
            if (ecx_2 == 0)
                goto label_6db963
            
            if (ecx_2 != 1)
                if (ecx_2 == 2)
                    *(arg3 + 0x278) = 1
                    sub_6d4840(arg3, "no space in chunk cache")
                else
                    *(arg3 + 0x278) = ecx_2 - 1
                label_6db963:
                    int32_t var_18_2 = ecx_2
                    sub_6ceea0(arg3 + 0x280, arg2, arg3, arg3 + 0x280)
                    ebx = 1
        else if (edi_1 == 2)
        label_6db932:
            
            if ((*(arg3 + 0x11c) & 0x20000000) != 0)
                goto label_6db93e
else if (sub_6db700(arg3, arg4) != 0)
    int32_t eax_3 = (*(arg3 + 0x230))(arg3, arg3 + 0x280)
    
    if (eax_3 s< 0)
        sub_6d47a0(arg3, "error in user chunk")
        noreturn
    
    if (eax_3 == 0)
        edi_1 = arg5
        
        if (edi_1 s>= 2)
            goto label_6db928
        
        if (*(arg3 + 0x234) s< 2)
            sub_6d47e0(arg3, "Saving unknown chunk:")
            
            if ((*(arg3 + 0x78) & 0x200000) == 0)
                sub_6d42e0(arg3, 
                    "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks")
                noreturn
            
            sub_6d4470(arg3, 
                "forcing save of an unhandled chunk; please call png_set_keep_unknown_chunks")
        
        goto label_6db932
    
    ebx = 1
int32_t result = *(arg3 + 0x288)

if (result != 0)
    int32_t ecx_4 = *(arg3 + 0x258)
    
    if (ecx_4 == 0)
        result = _free(result)
    else
        result = ecx_4(arg3, result)

*(arg3 + 0x288) = 0

if (ebx != 0 || (*(arg3 + 0x11c) & 0x20000000) != 0)
    return result

sub_6d47a0(arg3, "unhandled critical chunk")
noreturn
