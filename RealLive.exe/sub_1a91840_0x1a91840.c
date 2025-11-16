// 函数: sub_1a91840
// 地址: 0x1a91840
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

char* ecx = arg1
void* edi

while ((ecx & 3) != 0)
    char eax = *ecx
    ecx = &ecx[1]
    
    if (eax == 0)
    label_1a9188f:
        edi = &ecx[0xffffffff]
        goto label_1a918a1

while (true)
    int32_t eax_1 = *ecx
    ecx = &ecx[4]
    
    if (((eax_1 ^ 0xffffffff ^ (0x7efefeff + eax_1)) & 0x81010100) != 0)
        int32_t eax_4 = *(ecx - 4)
        
        if (eax_4.b == 0)
            edi = &ecx[0xfffffffc]
            break
        
        if (eax_4:1.b == 0)
            edi = &ecx[0xfffffffd]
            break
        
        if ((eax_4 & 0xff0000) == 0)
            edi = &ecx[0xfffffffe]
            break
        
        if ((eax_4 & 0xff000000) == 0)
            goto label_1a9188f

label_1a918a1:
char* ecx_1 = arg2
int32_t edx

while ((ecx_1 & 3) != 0)
    edx.b = *ecx_1
    ecx_1 = &ecx_1[1]
    
    if (edx.b == 0)
        goto label_1a91918
    
    *edi = edx.b
    edi += 1

while (true)
    int32_t eax_5 = *ecx_1
    edx = *ecx_1
    ecx_1 = &ecx_1[4]
    
    if (((eax_5 ^ 0xffffffff ^ (0x7efefeff + eax_5)) & 0x81010100) != 0)
        if (edx.b == 0)
            break
        
        if (edx:1.b == 0)
            *edi = edx.w
            return arg1
        
        if ((edx & 0xff0000) == 0)
            *edi = edx.w
            *(edi + 2) = 0
            return arg1
        
        if ((edx & 0xff000000) == 0)
            *edi = edx
            return arg1
    
    *edi = edx
    edi += 4

label_1a91918:
*edi = edx.b
return arg1
