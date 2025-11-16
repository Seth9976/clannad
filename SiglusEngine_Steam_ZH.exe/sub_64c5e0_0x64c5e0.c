// 函数: sub_64c5e0
// 地址: 0x64c5e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg6
int32_t esi = arg8
int32_t edi = arg7
int32_t eax = ebx - 0x80000000
int32_t eax_1 = edi - 0x80000000
int32_t eax_4 = arg9 - 0x80000000
char var_8
sub_6b2ad0(sub_6b2ad0(eax_4, 4, &arg8, 0), 4, &var_8, 0)
int32_t eax_7 = *arg3
char edx

if (eax_7 s>= ebx)
    edx = arg8:3.b
    
    if (eax_7 s> esi)
        edx = 1
    
    arg8:3.b = edx
else
    edx = arg8:3.b
    arg8:2.b = 1

uint32_t eax_9
int32_t ecx_2

if (*arg2 s>= edi)
    ecx_2 = arg9
    eax_9 = zx.d(arg8:1.b)
    
    if (*arg2 s> ecx_2)
        eax_9 = 1
    
    ebx = arg6
    arg8:1.b = eax_9.b
else
    eax_9.b = arg8:1.b
    arg8.b = 1
    ecx_2 = arg9

char var_6
char var_5

if (*arg4 s>= ebx)
    char eax_12 = var_5
    edi = arg7
    
    if (*arg4 s> esi)
        eax_12 = 1
    
    var_5 = eax_12
else
    var_6 = 1

int32_t ebx_2 = *arg5
char var_7

if (ebx_2 s>= edi)
    char eax_14 = var_7
    
    if (ebx_2 s> ecx_2)
        eax_14 = 1
    
    var_7 = eax_14
else
    var_8 = 1

int32_t eax_15 = 0

while (*(&arg8 + eax_15) == 0 || (&var_8)[eax_15] == 0)
    eax_15 += 1
    
    if (eax_15 s>= 4)
        eax_15 = *arg3 - 0x80000000
        int32_t ecx_5 = *arg2 - 0x80000000
        int32_t esi_3 = *arg4 - 0x80000000
        arg9 = eax_15
        int32_t edi_3 = ebx_2 - 0x80000000
        arg6 = ecx_5
        int32_t ebx_4 = eax_15
        arg7 = ecx_5
        int32_t edx_1
        int32_t edx_3
        int32_t ebx_5
        
        if (arg8:2.b != 0)
            eax_15 = sub_64c580(eax_15, ecx_5, eax_15, esi_3, edi_3, eax)
            ebx_5 = eax_1
            edx_1 = eax_4
            arg7 = eax_15
            
            if (eax_15 u< ebx_5 || eax_15 u> edx_1)
            label_64c7d3:
                
                if (arg8.b != 0)
                    eax_15 = arg9
                    ecx_5 = arg6
                    goto label_64c7ee
                
                if (arg8:1.b != 0)
                    eax_15 = arg9
                    ecx_5 = arg6
                    goto label_64c831
            else
                ebx_4 = eax
                eax_15 = arg9
                ecx_5 = arg6
            label_64c7a3:
                edx_3 = esi - 0x80000000
            label_64c7a6:
                
                if (var_6 != 0)
                    eax_15 = sub_64c580(eax_15, edi_3, esi_3, eax_15, ecx_5, eax)
                    
                    if (eax_15 u>= eax_1 && eax_15 u<= eax_4)
                        esi_3 = eax
                        edi_3 = eax_15
                    label_64c8fa:
                        *arg3 = ebx_4 - 0x80000000
                        *arg2 = arg7 - 0x80000000
                        *arg4 = esi_3 - 0x80000000
                        *arg5 = edi_3 - 0x80000000
                        int32_t eax_23
                        eax_23.b = 1
                        return eax_23
                    
                label_64c89d:
                    
                    if (var_8 != 0)
                        goto label_64c8b5
                    
                    if (var_7 != 0)
                        goto label_64c8df
                else
                    if (var_5 != 0)
                        eax_15 = sub_64c580(eax_15, ecx_5, eax_15, esi_3, edi_3, edx_3)
                        
                        if (eax_15 u< eax_1 || eax_15 u> eax_4)
                            goto label_64c89d
                        
                        esi_3 = esi - 0x80000000
                        edi_3 = eax_15
                        goto label_64c8fa
                    
                    if (var_8 != 0)
                    label_64c8b5:
                        esi_3 = sub_64c580(eax_15, esi_3, edi_3, arg6, arg9, eax_1)
                        
                        if (esi_3 u>= eax && esi_3 u<= esi - 0x80000000)
                            edi_3 = eax_1
                            goto label_64c8fa
                    else
                        if (var_7 == 0)
                            goto label_64c8fa
                        
                    label_64c8df:
                        esi_3 = sub_64c580(eax_15, arg9, arg6, edi_3, esi_3, eax_4)
                        
                        if (esi_3 u>= eax && esi_3 u<= esi - 0x80000000)
                            edi_3 = eax_4
                            goto label_64c8fa
        else
            if (edx != 0)
                eax_15 = sub_64c580(eax_15, edi_3, esi_3, eax_15, ecx_5, esi - 0x80000000)
                ebx_5 = eax_1
                edx_1 = eax_4
                arg7 = eax_15
                
                if (eax_15 u< ebx_5 || eax_15 u> edx_1)
                    goto label_64c7d3
                
                edx_3 = esi - 0x80000000
                ebx_4 = edx_3
                eax_15 = arg9
                ecx_5 = arg6
                goto label_64c7a6
            
            if (arg8.b != edx)
                ebx_5 = eax_1
            label_64c7ee:
                ebx_4 = sub_64c580(eax_15, eax_15, ecx_5, edi_3, esi_3, ebx_5)
                
                if (ebx_4 u>= eax)
                    edx_3 = esi - 0x80000000
                    
                    if (ebx_4 u<= edx_3)
                        ecx_5 = arg6
                        arg7 = eax_1
                        eax_15 = arg9
                        goto label_64c7a6
            else
                if (eax_9.b == edx)
                    goto label_64c7a3
                
                edx_1 = eax_4
            label_64c831:
                ebx_4 = sub_64c580(eax_15, esi_3, edi_3, ecx_5, eax_15, edx_1)
                
                if (ebx_4 u>= eax)
                    edx_3 = esi - 0x80000000
                    
                    if (ebx_4 u<= edx_3)
                        ecx_5 = arg6
                        arg7 = eax_4
                        eax_15 = arg9
                        goto label_64c7a6
        break

eax_15.b = 0
return eax_15
