// 函数: sub_4c3010
// 地址: 0x4c3010
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WaitForSingleObject(data_641b54, 0xffffffff)
int32_t i = 0x30

if (arg2 == 0)
    do
        sub_4c29d0(i)
        i += 1
    while (i s< 0x38)
    
    return ReleaseSemaphore(data_641b54, 1, nullptr)

int32_t ebx = data_641b5c

for (void* i_1 = &data_2091688; i_1 s< 0x2092288; )
    if (*(i_1 - 0xf8) != 2)
        if (ebx != 0 && i u<= 0x3f && *(i_1 - 0x130) != 0 && *(i_1 - 0x134) != 0)
            int32_t ecx = *(i_1 - 0xdc)
            int32_t edx = arg2
            *(i_1 + 0xc) = data_1392ccc
            ebx = data_641b5c
            *i_1 = ecx
            *(i_1 - 0xc) = 0
            *(i_1 - 8) = ecx
            *(i_1 + 0x18) = 2
            
            if (arg2 s< 0)
                edx = neg.d(edx)
            
            *(i_1 + 0x14) = edx
            *(i_1 + 0x10) = 0
            *(i_1 + 4) = 0
            *(i_1 + 8) = 0
            *(i_1 - 4) = 0
            *(i_1 - 0xf8) = 1
        
        *(i_1 - 0xf8) = 2
    
    i_1 += 0x180
    i += 1

return ReleaseSemaphore(data_641b54, 1, nullptr)
