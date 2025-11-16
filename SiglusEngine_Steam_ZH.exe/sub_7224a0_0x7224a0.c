// 函数: sub_7224a0
// 地址: 0x7224a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = 0
int32_t var_20 = 0
int32_t edx = arg7 - 0x80000000
int32_t eax_3 = arg8 - 0x80000000
int32_t eax_4 = 0
int32_t var_14 = 0
int32_t var_24 = 0
int32_t edx_2 = *arg1

if (edx_2 s< arg5)
    var_20 = 1
else if (edx_2 s> arg7)
    ecx = 1

int32_t edx_4 = *arg2

if (edx_4 s>= arg6)
    if (edx_4 s> arg8)
        eax_4 = 1
    
    var_24 = eax_4
else
    var_14 = 1

int32_t var_28 = 0
int32_t var_2c = 0
int32_t var_30 = 0
int32_t var_18 = 0
int32_t edx_6 = *arg3
int32_t esi_1

if (edx_6 s>= arg5)
    esi_1 = 0
    
    if (edx_6 s> arg7)
        esi_1 = 1
    
    var_30 = esi_1
else
    esi_1 = 0
    var_28 = 1

int32_t edi_2 = *arg4
int32_t ebx_1

if (edi_2 s>= arg6)
    ebx_1 = 0
    
    if (edi_2 s> arg8)
        ebx_1 = 1
    
    var_2c = ebx_1
else
    var_18 = 1
    ebx_1 = 0

if ((var_20 == 0 || var_28 == 0) && (ecx == 0 || esi_1 == 0) && (var_14 == 0 || var_18 == 0)
        && (eax_4 == 0 || ebx_1 == 0))
    int32_t edi_3 = edi_2 - 0x80000000
    int32_t ebx_3 = *arg1 - 0x80000000
    int32_t eax_7 = *arg2 - 0x80000000
    int32_t edx_8 = edx
    int32_t esi_4 = *arg3 - 0x80000000
    arg7 = ebx_3
    arg8 = eax_7
    int32_t var_1c_1 = eax_7
    int32_t ecx_1
    int32_t ecx_2
    int32_t edx_9
    
    if (var_20 != 0)
        eax_4 = sub_7227f0(ebx_3, eax_7, esi_4, edi_3, arg5 - 0x80000000)
        edx_9 = arg6 - 0x80000000
        ecx_1 = eax_3
        
        if (eax_4 u< edx_9 || eax_4 u> ecx_1)
        label_72268c:
            
            if (var_14 != 0)
                eax_7 = arg8
                goto label_7226a7
            
            if (var_24 != 0)
                eax_7 = arg8
                goto label_7226e4
        else
            ecx_2 = arg5 - 0x80000000
            ebx_3 = ecx_2
            edx_8 = edx
            arg8 = eax_4
        label_722634:
            
            if (var_28 != 0)
                eax_4 = sub_7227f0(esi_4, edi_3, arg7, var_1c_1, ecx_2)
                
                if (eax_4 u>= arg6 - 0x80000000 && eax_4 u<= eax_3)
                    esi_4 = arg5 - 0x80000000
                    edi_3 = eax_4
                label_7227aa:
                    *arg1 = ebx_3 - 0x80000000
                    *arg2 = arg8 - 0x80000000
                    *arg3 = esi_4 - 0x80000000
                    *arg4 = edi_3 - 0x80000000
                    int32_t eax_14
                    eax_14.b = 1
                    return eax_14
                
            label_72274b:
                
                if (var_18 != 0)
                    goto label_722764
                
                if (var_2c != 0)
                    goto label_72278f
            else
                if (var_30 != 0)
                    eax_4 = sub_7227f0(arg7, var_1c_1, esi_4, edi_3, edx_8)
                    
                    if (eax_4 u< arg6 - 0x80000000 || eax_4 u> eax_3)
                        goto label_72274b
                    
                    esi_4 = edx
                    edi_3 = eax_4
                    goto label_7227aa
                
                if (var_18 != 0)
                label_722764:
                    esi_4 = sub_7227f0(edi_3, esi_4, var_1c_1, arg7, arg6 - 0x80000000)
                    
                    if (esi_4 u>= arg5 - 0x80000000 && esi_4 u<= edx)
                        edi_3 = arg6 - 0x80000000
                        goto label_7227aa
                else
                    if (var_2c == 0)
                        goto label_7227aa
                    
                label_72278f:
                    esi_4 = sub_7227f0(var_1c_1, arg7, edi_3, esi_4, eax_3)
                    
                    if (esi_4 u>= arg5 - 0x80000000 && esi_4 u<= edx)
                        edi_3 = eax_3
                        goto label_7227aa
    else
        if (ecx != 0)
            eax_4 = sub_7227f0(esi_4, edi_3, ebx_3, eax_7, edx_8)
            edx_9 = arg6 - 0x80000000
            ecx_1 = eax_3
            
            if (eax_4 u< edx_9 || eax_4 u> ecx_1)
                goto label_72268c
            
            edx_8 = edx
            ebx_3 = edx_8
            arg8 = eax_4
        label_722631:
            ecx_2 = arg5 - 0x80000000
            goto label_722634
        
        if (var_14 != ecx)
            edx_9 = arg6 - 0x80000000
        label_7226a7:
            ecx_2 = arg5 - 0x80000000
            ebx_3 = sub_7227f0(eax_7, ebx_3, edi_3, esi_4, edx_9)
            
            if (ebx_3 u>= ecx_2)
                edx_8 = edx
                
                if (ebx_3 u<= edx_8)
                    arg8 = arg6 - 0x80000000
                    goto label_722634
        else
            if (var_24 == ecx)
                goto label_722631
            
            ecx_1 = eax_3
        label_7226e4:
            ecx_2 = arg5 - 0x80000000
            ebx_3 = sub_7227f0(edi_3, esi_4, eax_7, ebx_3, ecx_1)
            
            if (ebx_3 u>= ecx_2)
                edx_8 = edx
                
                if (ebx_3 u<= edx_8)
                    arg8 = eax_3
                    goto label_722634

eax_4.b = 0
return eax_4
