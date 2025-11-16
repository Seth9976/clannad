// 函数: sub_556710
// 地址: 0x556710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LRESULT* esi = data_20c2e88
WPARAM wParam = 0

if (data_20c2e8c s<= 0)
    return 

do
    if (SendMessageA(GetDlgItem(data_20c2e68, 0x4f32), 0x102c, wParam, 2) != 0)
        LRESULT eax = *esi
        int32_t ecx
        
        if (arg1 == 0)
            if (eax u<= 0x270f)
                ecx = eax * 9
                
                if (*((ecx << 2) + &data_1b8c890) != 0)
                    sub_4d1ba0(eax, *((ecx << 2) + &data_1b8c8ac), *((ecx << 2) + &data_1b8c894), 0)
        else if (eax u<= 0x270f)
            ecx = eax * 9
            
            if (*((ecx << 2) + &data_1b8c890) != 0)
                sub_4d1ba0(eax, *((ecx << 2) + &data_1b8c8ac), *((ecx << 2) + &data_1b8c894), -1)
    
    wParam += 1
    esi = &esi[1]
while (wParam s< data_20c2e8c)
