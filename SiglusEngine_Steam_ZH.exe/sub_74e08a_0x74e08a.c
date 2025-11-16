// 函数: sub_74e08a
// 地址: 0x74e08a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
int32_t eax = *(esi + 0x84)

if (eax != 0 && eax != &data_b4c190)
    int32_t* eax_1 = *(esi + 0x78)
    
    if (eax_1 != 0 && *eax_1 == 0)
        int32_t* eax_2 = *(esi + 0x80)
        
        if (eax_2 != 0 && *eax_2 == 0)
            _free(eax_2)
            ___free_lconv_mon(*(esi + 0x84))
        
        int32_t* eax_3 = *(esi + 0x7c)
        
        if (eax_3 != 0 && *eax_3 == 0)
            _free(eax_3)
            ___free_lconv_num(*(esi + 0x84))
        
        _free(*(esi + 0x78))
        _free(*(esi + 0x84))

int32_t* eax_4 = *(esi + 0x88)

if (eax_4 != 0 && *eax_4 == 0)
    _free(*(esi + 0x8c) - 0xfe)
    _free(*(esi + 0x94) - 0x80)
    _free(*(esi + 0x98) - 0x80)
    _free(*(esi + 0x88))

int32_t* eax_11 = *(esi + 0x9c)

if (eax_11 != &data_b4c9c8 && eax_11[0x2c] == 0)
    ___free_lc_time(eax_11)
    _free(*(esi + 0x9c))

void* i_1 = 6
void* ebx = esi + 0xa0
arg1 = 6
void* edi = esi + 0x1c
void* i

do
    if (*(edi - 8) != &data_b4c9c4)
        int32_t* eax_12 = *edi
        
        if (eax_12 != 0 && *eax_12 == 0)
            _free(eax_12)
            _free(*ebx)
        
        i_1 = arg1
    
    if (*(edi - 0xc) != 0)
        int32_t* eax_13 = *(edi - 4)
        
        if (eax_13 != 0 && *eax_13 == 0)
            _free(eax_13)
        
        i_1 = arg1
    
    ebx += 4
    edi += 0x10
    i = i_1
    i_1 -= 1
    arg1 = i_1
while (i != 1)
return _free(esi)
