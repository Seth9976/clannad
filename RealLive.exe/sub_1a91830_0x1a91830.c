// 函数: sub_1a91830
// 地址: 0x1a91830
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

char* edi = arg1
char* ecx = arg2
int32_t edx

while ((ecx & 3) != 0)
    edx.b = *ecx
    ecx = &ecx[1]
    
    if (edx.b == 0)
        goto label_1a91918
    
    *edi = edx.b
    edi = &edi[1]

while (true)
    int32_t eax_1 = *ecx
    edx = *ecx
    ecx = &ecx[4]
    
    if (((eax_1 ^ 0xffffffff ^ (0x7efefeff + eax_1)) & 0x81010100) != 0)
        if (edx.b == 0)
            break
        
        if (edx:1.b == 0)
            *edi = edx.w
            return arg1
        
        if ((edx & 0xff0000) == 0)
            *edi = edx.w
            edi[2] = 0
            return arg1
        
        if ((edx & 0xff000000) == 0)
            *edi = edx
            return arg1
    
    *edi = edx
    edi = &edi[4]

label_1a91918:
*edi = edx.b
return arg1
