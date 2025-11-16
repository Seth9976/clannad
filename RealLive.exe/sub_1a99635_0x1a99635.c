// 函数: sub_1a99635
// 地址: 0x1a99635
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

if (data_1c09308 == 0)
    sub_1a9493b()

char* esi = data_1c07708
int32_t edi = 0

while (true)
    void* eax
    eax.b = *esi
    
    if (eax.b == 0)
        break
    
    if (eax.b != 0x3d)
        edi += 1
    
    esi = esi + sub_1a91a20(esi) + 1

void* esi_1 = sub_1a91fb2((edi << 2) + 4)
data_1c076c0 = esi_1

if (esi_1 == 0)
    sub_1a931cd(9)

char* edi_1 = data_1c07708

while (*edi_1 != 0)
    void* ebp_2 = sub_1a91a20(edi_1) + 1
    
    if (*edi_1 != 0x3d)
        void* eax_4 = sub_1a91fb2(ebp_2)
        *esi_1 = eax_4
        
        if (eax_4 == 0)
            sub_1a931cd(9)
        
        sub_1a91830(*esi_1, edi_1)
        esi_1 += 4
    
    edi_1 += ebp_2

struct _EXCEPTION_REGISTRATION_RECORD* result = sub_1a91ec9(data_1c07708)
data_1c07708 = 0
*esi_1 = 0
data_1c092f4 = 1
return result
