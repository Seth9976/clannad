// 函数: sub_4cdaa0
// 地址: 0x4cdaa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WaitForSingleObject(data_702798, 0xffffffff)
int32_t edi = 0

for (int32_t i = 0; i s< 7; i += 1)
    if ((&data_20be860)[i] != 0)
        int32_t ebx_1 = i * 5
        
        if (*((ebx_1 << 3) + &data_20be8a8) != 0xff)
            int32_t eax_1 = *((ebx_1 << 3) + 0x20be8c4)
            int32_t ecx_1
            
            if (eax_1 == 1)
                ecx_1 = data_1392710
            else if (eax_1 == 2)
                ecx_1 = data_1392ccc
            else
                ecx_1 = data_131310c
            
            *((ebx_1 << 3) + 0x20be8bc) += ecx_1 - *((ebx_1 << 3) + 0x20be8b8)
            int32_t edx_1 = *((ebx_1 << 3) + 0x20be8bc)
            *((ebx_1 << 3) + 0x20be8b8) = ecx_1
            sub_4d1fd0((ebx_1 << 3) + &data_20be8a0, edx_1)
        
        int32_t eax_6 = *((ebx_1 << 3) + &data_20be8a4)
        int32_t ecx_3 = *((ebx_1 << 3) + &data_20be8a0)
        
        if (eax_6 != ecx_3)
            (&data_20be880)[i] = eax_6
            edi = 1
        else
            if (i == 5)
                edi = i - 3
            
            if (i != 5 || data_20be968 != 0)
                edi = 1
            
            (&data_20be880)[i] = ecx_3
            (&data_20be860)[i] = 0

if (edi != 0)
    sub_4cd890(1)

if (edi == 2)
    sub_4cd020()

return ReleaseSemaphore(data_702798, 1, nullptr)
