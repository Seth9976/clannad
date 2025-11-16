// 函数: sub_56f100
// 地址: 0x56f100
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
HWND hDlg = data_20efcc0
data_20efcd4 = 0xffffffff
data_20efcd8 = 0xffffffff
LRESULT result
int32_t edx
result, edx = SendMessageA(GetDlgItem(hDlg, 0x4f33), 0x1009, 0, 0)
int32_t edi = data_20efccc

if (edi != 0 && arg1 s>= 0 && arg1 s< data_20efcd0)
    int32_t edi_1 = *(edi + (arg1 << 2))
    result = edi_1 - 1
    
    if (result u<= 0x270e)
        WPARAM i = 0
        result = edi_1 * 9
        
        if (*((result << 2) + &data_1b8c8a8) s> 0)
            do
                result, edx = sub_556530(result, edx, data_20efcc0, edi_1, i, 1, 0)
                i += 1
            while (i s< *(edi_1 * 0x24 + &data_1b8c8a8))
        
        data_20efcd4 = arg1
        data_20efcd8 = edi_1

return result
