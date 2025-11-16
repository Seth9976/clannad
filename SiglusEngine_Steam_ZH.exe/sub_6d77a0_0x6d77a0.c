// 函数: sub_6d77a0
// 地址: 0x6d77a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = *(arg2 + 4)
void* esi = arg1
int32_t edx_2 = (zx.d(*(arg2 + 0xb)) + 7) s>> 3
char eax = *(esi + 0x14e)
arg1.b = eax
void* i_1 = *(esi + 0x124)
int32_t var_c = edx_2
void* i_4 = i_1
void* i = 0xfffffeff

if ((arg1.b & 8) != 0 && arg1.b != 8)
    i = nullptr
    i_1 += 1
    
    if (ebx u< 0x1ffffff)
        arg1 = 0
        void* i_3 = i_1
        
        if (ebx == 0)
            arg1.b = eax
        else
            do
                uint32_t edx_7 = zx.d(*(i_1 + arg1))
                
                if (edx_7 s>= 0x80)
                    edx_7 = 0x100 - edx_7
                    i_1 = i_3
                
                arg1 += 1
                i += edx_7
            while (arg1 u< ebx)
            
            arg1.b = eax
            edx_2 = var_c
    else
        int32_t edx_3 = 0
        void* i_2 = i_1
        
        if (ebx == 0)
            edx_2 = var_c
        else
            while (i u<= 0x1fffeff)
                arg1 = zx.d(*(i_1 + edx_3))
                
                if (arg1 s>= 0x80)
                    arg1 = 0x100 - arg1
                    i_1 = i_2
                
                edx_3 += 1
                i += arg1
                
                if (edx_3 u>= ebx)
                    break
            
            arg1.b = eax
            edx_2 = var_c

void* i_5

if (arg1.b != 0x10)
    if ((arg1.b & 0x10) != 0)
        i_1, arg1 = sub_6d7470(i_1, edx_2, esi, ebx, i)
        
        if (i_1 u< i)
            arg1 = *(esi + 0x12c)
            i = i_1
            i_1 = *(esi + 0x128)
            i_4 = i_1
            
            if (arg1 != 0)
                *(esi + 0x128) = arg1
                *(esi + 0x12c) = i_1
        
        arg1.b = eax
    
    if (arg1.b != 0x20)
        goto label_6d7851
    
    sub_6d7510(i_1, ebx, esi, i)
    i_1 = *(esi + 0x128)
    arg1.b = eax
    i_4 = i_1
label_6d798a:
    
    if ((arg1.b & 0x40) != 0)
        i_1, arg1 = sub_6d7590(i_1, var_c, esi, ebx, i)
        
        if (i_1 u< i)
            arg1 = *(esi + 0x12c)
            i = i_1
            i_1 = *(esi + 0x128)
            i_4 = i_1
            
            if (arg1 != 0)
                *(esi + 0x128) = arg1
                *(esi + 0x12c) = i_1
        
        arg1.b = eax
    
    if (arg1.b != 0x80)
        goto label_6d78ae
    
    sub_6d7670(i_1, var_c, esi, ebx, i)
    i_5 = *(esi + 0x128)
else
    sub_6d7470(i_1, edx_2, esi, ebx, i)
    i_1 = *(esi + 0x128)
    arg1.b = eax
    i_4 = i_1
label_6d7851:
    
    if ((arg1.b & 0x20) != 0)
        i_1, arg1 = sub_6d7510(i_1, ebx, esi, i)
        
        if (i_1 u< i)
            arg1 = *(esi + 0x12c)
            i = i_1
            i_1 = *(esi + 0x128)
            i_4 = i_1
            
            if (arg1 != 0)
                *(esi + 0x128) = arg1
                *(esi + 0x12c) = i_1
        
        arg1.b = eax
    
    if (arg1.b != 0x40)
        goto label_6d798a
    
    sub_6d7590(i_1, var_c, esi, ebx, i)
    i_1 = *(esi + 0x128)
    arg1.b = eax
    i_4 = i_1
label_6d78ae:
    int32_t eax_2
    
    if (arg1.b s< 0)
        eax_2 = sub_6d7670(i_1, var_c, esi, ebx, i)
    
    if (arg1.b s>= 0 || eax_2 u>= i)
        i_5 = i_4
    else
        int32_t eax_3 = *(esi + 0x12c)
        i_5 = *(esi + 0x128)
        
        if (eax_3 != 0)
            *(esi + 0x128) = eax_3
            *(esi + 0x12c) = i_5

int32_t eax_7 = *(arg2 + 4) + 1
sub_6d5730(eax_7, i_5, esi, eax_7, nullptr)
int32_t ecx_9 = *(esi + 0x120)

if (ecx_9 != 0)
    *(esi + 0x120) = *(esi + 0x124)
    *(esi + 0x124) = ecx_9

sub_6d70c0(esi)
*(esi + 0x17c) += 1
int32_t result = *(esi + 0x178)

if (result != 0 && *(esi + 0x17c) u>= result)
    result = *(esi + 0x118)
    
    if (result u< *(esi + 0x108))
        sub_6d5730(result, 0, esi, 0, 2)
        result = *(esi + 0x174)
        *(esi + 0x17c) = 0
        
        if (result != 0)
            return result(esi)

return result
