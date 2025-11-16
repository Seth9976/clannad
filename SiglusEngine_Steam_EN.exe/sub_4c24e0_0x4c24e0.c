// 函数: sub_4c24e0
// 地址: 0x4c24e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
WaitForSingleObject(data_641b54, 0xffffffff)

for (int32_t i = 0; i s< 0x40; i += 1)
    sub_4c29d0(i)

if (data_641b5c != 0)
    int32_t* eax_1 = data_641b58
    
    if ((*(*eax_1 + 0x24))(eax_1, &var_8) == 0 && (var_8.b & 1) != 0)
        int32_t* ecx_2 = data_641b40
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 0x48))(ecx_2)
            int32_t* eax_4 = data_641b40
            (*(*eax_4 + 8))(eax_4)
            data_641b40 = 0
        
        int32_t* eax_5 = data_641b58
        (*(*eax_5 + 0x48))(eax_5)
    
    if (data_641b5c != 0)
        int32_t* eax_6 = data_641b58
        (*(*eax_6 + 0x48))(eax_6)
        int32_t* eax_7 = data_641b58
        (*(*eax_7 + 8))(eax_7)
        int32_t* eax_8 = data_641b5c
        (*(*eax_8 + 8))(eax_8)
        data_641b5c = 0

sub_4d7020(&data_641b50, &data_641b48)
ReleaseSemaphore(data_641b54, 1, nullptr)
BOOL hObject = data_641b54

if (hObject != 0)
    hObject = CloseHandle(hObject)
    data_641b54 = 0

return hObject
