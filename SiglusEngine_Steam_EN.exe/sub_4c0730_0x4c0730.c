// 函数: sub_4c0730
// 地址: 0x4c0730
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WaitForSingleObject(data_641b34, 0xffffffff)
int32_t edi = 0

for (int32_t i = 0; i s< 7; i += 1)
    if ((&data_208c6f0)[i] != 0)
        int32_t ebx_1 = i * 5
        
        if (*((ebx_1 << 3) + &data_208c738) != 0xff)
            int32_t eax_1 = *((ebx_1 << 3) + &data_208c754)
            int32_t ecx_1
            
            if (eax_1 == 1)
                ecx_1 = data_1392710
            else if (eax_1 == 2)
                ecx_1 = data_1392ccc
            else
                ecx_1 = data_131310c
            
            *((ebx_1 << 3) + &data_208c74c) += ecx_1 - *((ebx_1 << 3) + &data_208c748)
            int32_t edx_1 = *((ebx_1 << 3) + &data_208c74c)
            *((ebx_1 << 3) + &data_208c748) = ecx_1
            sub_4d1fd0((ebx_1 << 3) + &data_208c730, edx_1)
        
        int32_t eax_6 = *((ebx_1 << 3) + &data_208c734)
        int32_t ecx_3 = *((ebx_1 << 3) + &data_208c730)
        
        if (eax_6 != ecx_3)
            (&data_208c710)[i] = eax_6
            edi = 1
        else
            if (i == 5)
                edi = i - 3
            
            if (i != 5 || data_208c7f8 != 0)
                edi = 1
            
            (&data_208c710)[i] = ecx_3
            (&data_208c6f0)[i] = 0

if (edi != 0 && data_208c70c != 0 && data_63e788 != 0)
    if (data_208c6ec == 0)
        sub_4c0100(1)
    else
        sub_4c0310(1)

int32_t eax_7 = data_1bfffc8
HANDLE hSemaphore = data_641b34

if (edi == 2)
    eax_7 = 0x1e240

data_1bfffc8 = eax_7
return ReleaseSemaphore(hSemaphore, 1, nullptr)
