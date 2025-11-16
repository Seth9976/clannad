// 函数: sub_4cd020
// 地址: 0x4cd020
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
HWAVEOUT hwo = data_1c04214

if (hwo != 0)
    data_1c04214 = 0
    waveOutReset(hwo)
    void* pwh = &data_20beac0
    int32_t edi_1 = 0
    
    do
        if (*(edi_1 + &data_20beb40) != 0)
            waveOutUnprepareHeader(hwo, pwh, 0x20)
            sub_4d6c40(edi_1 + &data_20beb40, edi_1 + &data_20beb50)
        
        pwh += 0x20
        edi_1 += 4
    while (pwh s< &data_20beb40)
    
    waveOutClose(hwo)
    hwo = data_20be858
    
    if (hwo != 0)
        int32_t i = 0
        
        if (hwo s> 0)
            do
                hwo = waveOutSetVolume(*((i << 2) + &data_20be9c0), *((i << 2) + &data_20bea40))
                i += 1
            while (i s< data_20be858)
    
    __builtin_memset(&data_20be860, 0, 0x1c)
    __builtin_memcpy(&data_20be880, 
        "\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x"
    "00\xff\x00\x00\x00", 
        0x1c)
    data_20be858 = 0

return hwo
