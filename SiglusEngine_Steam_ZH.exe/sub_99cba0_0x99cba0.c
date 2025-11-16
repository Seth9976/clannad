// 函数: sub_99cba0
// 地址: 0x99cba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
char* ebx = arg1
void* esi = *(ebx + 0x68)
sub_99cc30(ebx)
int32_t eax = *(ebx + 0x44)

if (eax != 0)
    _free(eax)

if (esi != 0)
    int32_t i = 0
    int32_t* esi_1 = esi + 0xc
    
    do
        void* ebx_1 = *esi_1
        int32_t eax_1 = *(ebx_1 + 8)
        
        if (eax_1 != 0)
            _free(eax_1)
        
        __builtin_memset(ebx_1, 0, 0x14)
        
        if (i != 7)
            _free(*esi_1)
        
        i += 1
        esi_1 = &esi_1[1]
    while (i s< 0xf)
    
    _free(esi)
    ebx = arg1

_memset(ebx, 0, 0x70)
return 0
