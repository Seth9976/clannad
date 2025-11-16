// 函数: sub_6d8ab0
// 地址: 0x6d8ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = 0xffffffff
int32_t* var_c = arg5
void* eax = *(arg3 + 0x27c)

if (eax != 0 && eax u< 0xffffffff)
    ecx = eax

if (ecx u< arg4 + 1)
    if (*(arg3 + 0x9c) == 0)
        *(arg3 + 0x9c) = "insufficient memory"
    
    return 0xfffffffc

void* ecx_1 = ecx + 0xffffffff - arg4

if (ecx_1 u< *arg5)
    *arg5 = ecx_1

void* edi = sub_6d8850(arg3, *(arg3 + 0x11c))

if (edi != 0)
    if (edi == 1)
        return 0xfffffff9
    
    return edi

void* eax_5 = arg2 - arg4
void* edx_3 = *(arg3 + 0x298) + arg4
void* var_14 = eax_5
int32_t edi_3

if (*(arg3 + 0x80) != *(arg3 + 0x11c))
    *(arg3 + 0x9c) = "zstream unclaimed"
    edi_3 = 0xfffffffe
else
    int32_t edi_1 = sub_6d89a0(&var_14, edx_3, arg3, &var_14, edi, var_c)
    
    if (edi_1 != 1)
        *(arg3 + 0x80) = 0
        
        if (edi_1 == 0)
            return 0xfffffff9
        
        return edi_1
    
    if (sub_724bc0(arg3 + 0x84) != 0)
        sub_6cb6b0(arg3, 1)
        *(arg3 + 0x80) = 0
        return 0xfffffff9
    
    void* eax_11 = *var_c
    
    if (eax_11 + 1 == neg.d(arg4))
    label_6d8c68:
        edi_3 = 0xfffffffc
        
        if (*(arg3 + 0x9c) == 0)
            *(arg3 + 0x9c) = "insufficient memory"
            *(arg3 + 0x80) = 0
            return 0xfffffffc
    else
        int32_t* eax_14 = sub_6d8210(arg3, eax_11 + 1 + arg4)
        int32_t* var_8_1 = eax_14
        
        if (eax_14 == 0)
            goto label_6d8c68
        
        int32_t* edx_8
        
        if (*(arg3 + 0x80) != *(arg3 + 0x11c))
            *(arg3 + 0x9c) = "zstream unclaimed"
            edi_3 = 0xfffffffe
            edx_8 = eax_14
        else
            edi_3 = sub_6d89a0(&var_14, *(arg3 + 0x298) + arg4, arg3, &var_14, arg4 + eax_14, var_c)
            
            if (edi_3 != 1)
                edx_8 = var_8_1
                
                if (edi_3 == 0)
                    edi_3 = 0xfffffff9
            else
                void* eax_19 = *var_c
                
                if (eax_11 != eax_19)
                    edx_8 = var_8_1
                    edi_3 = 0xfffffff9
                else
                    *(eax_19 + arg4 + var_8_1) = 0
                    
                    if (arg4 != 0)
                        sub_748840(var_8_1, *(arg3 + 0x298), arg4)
                    
                    eax_14 = *(arg3 + 0x298)
                    *(arg3 + 0x298) = var_8_1
                    *(arg3 + 0x29c) = eax_11 + 1 + arg4
                    edx_8 = eax_14
        
        sub_6d83a0(arg3, edx_8)
        
        if (edi_3 == 1 && eax_5 != var_14)
            sub_6d4840(arg3, "extra compressed data")
            *(arg3 + 0x80) = 0
            return edi_3

*(arg3 + 0x80) = 0
return edi_3
