// 函数: sub_571710
// 地址: 0x571710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == arg2)
    return arg4

int32_t* edx = arg4
int32_t ebx
int32_t var_10 = ebx
void* edi = arg3 + 0x64
arg4 = edx
int32_t* esi = &edx[0x19]
int32_t eax_1 = arg3 - edx - 0x64
int32_t var_8 = eax_1

do
    *edx = *(esi + eax_1)
    esi[-0x18] = *(edi - 0x60)
    esi[-0x17] = *(edi - 0x5c)
    esi[-0x16] = *(edi - 0x58)
    esi[-0x15] = *(edi - 0x54)
    esi[-0x14] = *(edi - 0x50)
    esi[-0x13] = *(edi - 0x4c)
    esi[-0x12] = *(edi - 0x48)
    esi[-0x11] = *(edi - 0x44)
    esi[-0x10] = *(edi - 0x40)
    
    if (&esi[-0xf] != edi - 0x3c)
        sub_52e3c0(&esi[-0xf], edi - 0x3c, 0, 0xffffffff)
    
    esi[-9] = *(edi - 0x24)
    int32_t eax_14
    eax_14.w = *(edi - 0x20)
    esi[-8].w = eax_14.w
    *(esi - 0x1e) = *(edi - 0x1e)
    esi[-6] = *(edi - 0x18)
    esi[-5] = *(edi - 0x14)
    int32_t eax_17
    eax_17.b = *(edi - 0x10)
    esi[-4].b = eax_17.b
    esi[-3] = *(edi - 0xc)
    void* ebx_2 = *(edi - 8)
    
    if (ebx_2 != esi[-2])
        if (ebx_2 != 0)
            *(ebx_2 + 8)
            *(ebx_2 + 8) += 1
        
        int32_t* ecx_4 = esi[-2]
        
        if (ecx_4 != 0)
            bool cond:0_1 = ecx_4[2] != 1
            ecx_4[2] -= 1
            
            if (not(cond:0_1))
                (*(*ecx_4 + 8))()
        
        esi[-2] = ebx_2
    
    esi[-1] = *(edi - 4)
    void* ebx_3 = *edi
    
    if (ebx_3 != *esi)
        if (ebx_3 != 0)
            *(ebx_3 + 8)
            *(ebx_3 + 8) += 1
        
        int32_t* ecx_6 = *esi
        
        if (ecx_6 != 0)
            bool cond:1_1 = ecx_6[2] != 1
            ecx_6[2] -= 1
            
            if (not(cond:1_1))
                (*(*ecx_6 + 8))()
        
        *esi = ebx_3
    
    esi[1] = *(edi + 4)
    void* ebx_4 = *(edi + 8)
    
    if (ebx_4 != esi[2])
        if (ebx_4 != 0)
            *(ebx_4 + 8)
            *(ebx_4 + 8) += 1
        
        int32_t* ecx_8 = esi[2]
        
        if (ecx_8 != 0)
            bool cond:2_1 = ecx_8[2] != 1
            ecx_8[2] -= 1
            
            if (not(cond:2_1))
                (*(*ecx_8 + 8))()
        
        esi[2] = ebx_4
    
    esi[3] = *(edi + 0xc)
    void* ebx_5 = *(edi + 0x10)
    
    if (ebx_5 != esi[4])
        if (ebx_5 != 0)
            *(ebx_5 + 8)
            *(ebx_5 + 8) += 1
        
        int32_t* ecx_10 = esi[4]
        
        if (ecx_10 != 0)
            bool cond:3_1 = ecx_10[2] != 1
            ecx_10[2] -= 1
            
            if (not(cond:3_1))
                (*(*ecx_10 + 8))()
        
        esi[4] = ebx_5
    
    esi[5] = *(edi + 0x14)
    void* ebx_6 = *(edi + 0x18)
    
    if (ebx_6 != esi[6])
        if (ebx_6 != 0)
            *(ebx_6 + 8)
            *(ebx_6 + 8) += 1
        
        int32_t* ecx_12 = esi[6]
        
        if (ecx_12 != 0)
            bool cond:4_1 = ecx_12[2] != 1
            ecx_12[2]
            ecx_12[2] -= 1
            
            if (not(cond:4_1))
                (*(*ecx_12 + 8))()
        
        esi[6] = ebx_6
    
    eax_1 = var_8
    esi -= 0xffffff80
    edi -= 0xffffff80
    edx = arg4 + 0x80
    arg4 = edx
while (esi + eax_1 != arg2)

return edx
