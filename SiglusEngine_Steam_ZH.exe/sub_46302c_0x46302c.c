// 函数: sub_46302c
// 地址: 0x46302c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
HANDLE hObject = arg1[0xc]
*arg1 = &data_ac3ba8
CloseHandle(hObject)
CloseHandle(arg1[0xd])
BOOL hObject_1 = arg1[0xe]

if (hObject_1 != 0xffffffff)
    CloseHandle(hObject_1)

hObject_1.b = arg1[0x12].b

if ((hObject_1.b & 0x40) == 0)
    if (hObject_1.b s>= 0)
        DeleteFileA(arg1[3])
else if (hObject_1.b s>= 0)
    DeleteFileW(arg1[3])

j__free(arg1[3])
int32_t* eax = arg1[2]
(*(*eax + 8))(eax)
sub_46176f(&arg1[8])
return sub_460924(&arg1[4]) __tailcall
