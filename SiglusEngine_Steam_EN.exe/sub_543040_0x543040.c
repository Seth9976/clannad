// 函数: sub_543040
// 地址: 0x543040
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg1

if (esi s< 0)
    esi = 0
else if (esi s> 0xff)
    esi = 0xff

bool cond:0 = data_208c70c == 0
data_208c718 = esi

if (not(cond:0) && data_1bfe268 != 0xffffffff)
    sub_4c0620()

if (data_641b5c == 0)
    return 

WaitForSingleObject(data_641b54, 0xffffffff)

if (esi s>= 0)
    int32_t eax_1 = esi
    
    if (esi s> 0xff)
        eax_1 = 0xff
    
    data_208cda0 = eax_1
else
    data_208cda0 = 0

if (data_208cd58 != 0 && data_208cd54 != 0)
    sub_4c33a0(0)

ReleaseSemaphore(data_641b54, 1, nullptr)

if (data_641b5c == 0)
    return 

WaitForSingleObject(data_641b54, 0xffffffff)

if (esi s>= 0)
    if (esi s> 0xff)
        esi = 0xff
    
    data_208cf20 = esi
else
    data_208cf20 = 0

if (data_208ced8 != 0 && data_208ced4 != 0)
    sub_4c33a0(1)

ReleaseSemaphore(data_641b54, 1, nullptr)
