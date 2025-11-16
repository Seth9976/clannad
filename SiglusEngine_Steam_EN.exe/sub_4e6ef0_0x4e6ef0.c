// 函数: sub_4e6ef0
// 地址: 0x4e6ef0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_4c9be0()
WaitForSingleObject(data_1bfffc4, 0xffffffff)
sub_4d7020(&data_7027a4, &data_70279c)
ReleaseSemaphore(data_1bfffc4, 1, nullptr)
CloseHandle(data_1bfffc4)
WaitForSingleObject(data_1c04208, 0xffffffff)
int32_t ecx = ReleaseSemaphore(data_1c04208, 1, nullptr)
HANDLE hObject = data_1c04208

if (hObject != 0)
    ecx = CloseHandle(hObject)
    data_1c04208 = 0

if (data_1332b80 != 0)
    ecx = data_1332b78()
    HMODULE hLibModule = data_1332b80
    
    if (hLibModule != 0)
        ecx = FreeLibrary(hLibModule)

data_1332b80 = 0
sub_4c24e0(ecx)
HANDLE hObject_1 = data_702798

if (hObject_1 != 0)
    CloseHandle(hObject_1)
    data_702798 = 0

sub_4cd020()
sub_4cdd40()
HANDLE hObject_2 = data_641b28

if (hObject_2 != 0)
    CloseHandle(hObject_2)
    data_641b28 = 0

bool cond:0 = data_1cd450c == 0
data_7027b8 = 0

if (not(cond:0))
    sub_4dea40(0)

sub_4be310()
sub_4be270()
HMIDIOUT hmo = data_70278c

if (hmo != 0)
    data_70278c = 0
    midiOutReset(hmo)
    midiOutClose(hmo)

HANDLE hObject_3 = data_641b34

if (hObject_3 != 0)
    CloseHandle(hObject_3)
    data_641b34 = 0

sub_4bef40()
sub_4cb670()
sub_41a690(data_1333e30)
sub_44b580(sub_451c80())
sub_4e6e10()
sub_4c58c0()
sub_4d6c40(&data_1c45524, &data_1ccd298)
data_1c45528 = 0
sub_4c5070()
sub_590600()
sub_4d6390()
sub_4e3660()
int32_t result = CoUninitialize()
data_20c0548 = 1
return result
