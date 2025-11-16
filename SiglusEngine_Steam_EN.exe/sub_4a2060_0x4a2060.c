// 函数: sub_4a2060
// 地址: 0x4a2060
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
WaitForSingleObject(data_641b54, 0xffffffff)
sub_4c29d0(4)
ReleaseSemaphore(data_641b54, 1, nullptr)
WaitForSingleObject(data_702788, 0xffffffff)
sub_4cb390(0x20b0750)
sub_4d1ba0(sub_4d1ba0(ReleaseSemaphore(data_702788, 1, nullptr), 0x24, 0x975bf8, 0), 0x24, 
    0x975c20, 0)
data_975c1c = 0xffffffff
int32_t i_1 = 0xf
void* esi = &data_20b0b20
int32_t edi = 5
BOOL result
int32_t i

do
    if (edi u<= 0x3f)
        WaitForSingleObject(data_641b54, 0xffffffff)
        sub_4c29d0(edi)
        ReleaseSemaphore(data_641b54, 1, nullptr)
    
    WaitForSingleObject(data_702788, 0xffffffff)
    
    if (edi u<= 0x3f)
        if (*(esi - 0x10) == 3)
            int32_t* eax_2 = *esi
            (*(*eax_2 + 0x24))(eax_2)
        
        *(esi + 0x3c) = 0xff
        
        if (*(esi + 0x194) == 0)
            *(esi - 0x10) = 1
        else
            sub_4caf70(esi - 0x10)
    
    result = ReleaseSemaphore(data_702788, 1, nullptr)
    edi += 1
    esi += 0x3c0
    i = i_1
    i_1 -= 1
while (i != 1)
return result
