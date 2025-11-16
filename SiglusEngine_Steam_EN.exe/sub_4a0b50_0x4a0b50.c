// 函数: sub_4a0b50
// 地址: 0x4a0b50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    BOOL eax_3 = data_92b938
    
    if (eax_3 == 1)
        int32_t eax_6 =
            sub_4d1ba0(sub_4d1ba0(sub_4bf8e0(arg1), 0x24, &data_92b1b0, 0), 0x24, &data_92b1d8, 0)
        data_92b1d4 = 0xffffffff
        return eax_6
    
    if (eax_3 != 0)
        return eax_3
    
    return sub_49e720(eax_3, data_107f0f0, &data_92b1b0, arg1)

sub_4bf8e0(arg1)
WaitForSingleObject(data_641b54, 0xffffffff)
sub_4c29d0(0)
ReleaseSemaphore(data_641b54, 1, nullptr)
WaitForSingleObject(data_702788, 0xffffffff)
sub_4d1ba0(sub_4d1ba0(sub_4cb9c0(0, 0), 0x24, &data_92b1b0, 0), 0x24, &data_92b1d8, 0)
data_92b1d4 = 0xffffffff
WaitForSingleObject(data_641b54, 0xffffffff)
sub_4c29d0(1)
ReleaseSemaphore(data_641b54, 1, nullptr)
WaitForSingleObject(data_702788, 0xffffffff)
return sub_4cb9c0(1, 0) __tailcall
