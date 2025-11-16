// 函数: sub_6071e0
// 地址: 0x6071e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(arg4 - arg2)
int32_t edi
int32_t var_20 = edi
int32_t var_24 = arg5
char* i = &arg2[(eax_2 - edx) s>> 1]
sub_607750(&arg4[0xffffffff], i, arg2, &arg4[0xffffffff])
char* edx_2 = &i[1]
void* var_8 = edx_2
char* ecx_2

for (; arg2 u< i; i -= 1)
    ecx_2.b = i[0xffffffff]
    ecx_2:1.b = *i
    
    if (ecx_2.b s< ecx_2:1.b)
        break
    
    if (ecx_2:1.b s< ecx_2.b)
        break

char* eax_5 = arg4

if (edx_2 u< eax_5)
    char* ebx
    ebx.b = *i
    
    do
        ecx_2.b = *edx_2
        
        if (ecx_2.b s< ebx.b)
            break
        
        if (ebx.b s< ecx_2.b)
            break
        
        edx_2 = &edx_2[1]
    while (edx_2 u< eax_5)
    
    var_8 = edx_2

char* i_2 = i
char* ebx_1 = edx_2
char* i_3 = i_2

while (true)
    if (ebx_1 u< eax_5)
        do
            eax_5.b = *i
            ecx_2.b = *ebx_1
            
            if (eax_5.b s>= ecx_2.b)
                if (ecx_2.b s< eax_5.b)
                    break
                
                eax_5 = edx_2
                edx_2 = &edx_2[1]
                
                if (eax_5 != ebx_1)
                    eax_5.b = edx_2[0xffffffff]
                    edx_2[0xffffffff] = ecx_2.b
                    *ebx_1 = eax_5.b
            
            ebx_1 = &ebx_1[1]
        while (ebx_1 u< arg4)
        
        i_2 = i_3
        var_8 = edx_2
    
    bool cond:0_1 = i_2 != arg2
    char* eax_6
    
    if (i_2 u> arg2)
        void* ecx_3 = &i_2[0xffffffff]
        
        do
            eax_6:1.b = *ecx_3
            eax_6.b = *i
            
            if (eax_6:1.b s>= eax_6.b)
                if (eax_6.b s< eax_6:1.b)
                    break
                
                i -= 1
                
                if (i != ecx_3)
                    eax_6.b = *i
                    *i = eax_6:1.b
                    *ecx_3 = eax_6.b
            
            i_2 -= 1
            ecx_3 -= 1
        while (arg2 u< i_2)
        
        cond:0_1 = i_2 != arg2
        edx_2 = var_8
        i_3 = i_2
    
    if (cond:0_1)
        i_2 -= 1
        i_3 = i_2
        
        if (ebx_1 != arg4)
            eax_6.b = *i_2
            ecx_2.b = *ebx_1
            *ebx_1 = eax_6.b
            ebx_1 = &ebx_1[1]
            eax_5 = arg4
            *i_2 = ecx_2.b
        else
            i -= 1
            
            if (i_2 != i)
                eax_6.b = *i
                ecx_2.b = *i_2
                *i_2 = eax_6.b
                *i = ecx_2.b
            
            eax_6.b = edx_2[0xffffffff]
            edx_2 -= 1
            ecx_2.b = *i
            *i = eax_6.b
            eax_5 = arg4
            var_8 = edx_2
            *edx_2 = ecx_2.b
    else
        if (ebx_1 == arg4)
            break
        
        if (edx_2 != ebx_1)
            eax_6.b = *edx_2
            ecx_2.b = *i
            *i = eax_6.b
            *edx_2 = ecx_2.b
        
        char* edi_3 = ebx_1
        var_8 = &edx_2[1]
        char* i_1 = i
        i = &i[1]
        ebx_1 = &ebx_1[1]
        eax_6.b = *edi_3
        ecx_2.b = *i_1
        *i_1 = eax_6.b
        edx_2 = var_8
        eax_5 = arg4
        *edi_3 = ecx_2.b
        i_2 = i_3

*arg3 = i
arg3[1] = edx_2
return arg3
