// 函数: sub_55a460
// 地址: 0x55a460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx
int32_t esi = 0xffffffe9
int32_t* edi = &data_1af0a10

do
    if (esi + 0x17 u<= 0x3f && *edi != 0)
        switch (esi)
            case 0
                sub_56d890()
            case 3
                sub_564ad0()
            case 5
                sub_55ca60()
                SetWindowLongA(GetDlgItem(data_1af0a7c, 0x4e60), 0xfffffffc, data_20c54b4)
            case 6
                sub_4d6c40(&data_20c54b8, &data_20c54bc)
            case 8
                sub_5738f0()
            case 0x17
                sub_56f800()
            case 0x1c
                sub_4d6c40(&data_20c54c0, &data_20c54c4)
        
        sub_559ef0(esi + 0x17, 1)
        EndDialog(*edi, 0)
        *edi = 0
    
    esi += 1
    edi = &edi[1]
while (esi + 0x17 s< 0x40)

return esi + 0x17
