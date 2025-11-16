// 函数: sub_56f080
// 地址: 0x56f080
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LRESULT result
int32_t edx
result, edx = SendMessageA(GetDlgItem(data_20efcc0, 0x4f32), 0x1009, 0, 0)
int32_t* edi = data_20efccc
int32_t i = 0

if (data_20efcd0 s> 0)
    do
        int32_t eax_1 = data_1333e40
        
        if (eax_1 != 0)
            eax_1, edx = eax_1(0, &data_6138e3, i, i, data_20efcc0, 0x4f32)
        
        result, edx = sub_556410(eax_1, edx, data_20efcc0, i, *edi)
        i += 1
        edi = &edi[1]
    while (i s< data_20efcd0)

return result
