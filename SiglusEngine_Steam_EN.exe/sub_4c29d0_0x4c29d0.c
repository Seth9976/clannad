// 函数: sub_4c29d0
// 地址: 0x4c29d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 

int32_t* ecx = (&data_208cd58)[arg1 * 0x60]

if (ecx != 0)
    (*(*ecx + 0x48))(ecx)
    int32_t* eax_2 = (&data_208cd58)[arg1 * 0x60]
    (*(*eax_2 + 8))(eax_2)
    (&data_208cd58)[arg1 * 0x60] = 0

(&data_208cd54)[arg1 * 0x60] = 0
*(arg1 * 0x180 + &data_208cd50) = 0
*(arg1 * 0x180 + &data_208cd64) = 0
__builtin_memset(arg1 * 0x180 + 0x208cd7c, 0, 0x1c)
__builtin_memcpy(arg1 * 0x180 + 0x208cd98, 
    "\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\x"
"ff\x00\x00\x00", 
    0x1c)
sub_4d6c40(arg1 * 0x3b8 + 0x2092d58, arg1 * 0x3b8 + 0x2092d5c)
sub_4d6c40(arg1 * 0x3b8 + 0x2092d6c, arg1 * 0x3b8 + 0x2092d70)
sub_4d6c40(arg1 * 0x3b8 + 0x2092da8, arg1 * 0x3b8 + 0x2092dac)
BOOL hObject = *(arg1 * 0x3b8 + 0x2092d74)

if (hObject != 0xffffffff)
    hObject = CloseHandle(hObject)

if (*(arg1 * 0x3b8 + 0x2092db0) != 0)
    WaitForSingleObject(data_1c04208, 0xffffffff)
    sub_401000(arg1 * 0x3b8 + 0x2092db8)
    hObject = ReleaseSemaphore(data_1c04208, 1, nullptr)

sub_4d1ba0(hObject, 0x3b8, arg1 * 0x3b8 + 0x2092d50, 0)
__builtin_memset(arg1 * 0x3b8 + 0x2092d50, 0, 0x14)
*(arg1 * 0x3b8 + 0x2092d6c) = 0
*(arg1 * 0x3b8 + 0x2092d70) = 0
*(arg1 * 0x3b8 + 0x2092da8) = 0
*(arg1 * 0x3b8 + 0x2092dac) = 0
*(arg1 * 0x3b8 + 0x2092d74) = 0xffffffff
*(arg1 * 0x3b8 + 0x2092db0) = 0
