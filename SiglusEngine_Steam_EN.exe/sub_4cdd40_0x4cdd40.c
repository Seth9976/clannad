// 函数: sub_4cdd40
// 地址: 0x4cdd40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
HWAVEIN hwi = data_1c04434

if (hwi == 0)
    return 

data_1c04434 = 0
waveInStop(hwi)
sub_4cdc00()
waveInReset(hwi)
void* pwh = &data_20bee70
void* edi_1 = nullptr

do
    if (*(edi_1 + 0x20beb70) != 0)
        waveInUnprepareHeader(hwi, pwh, 0x20)
        sub_4d6c40(edi_1 + 0x20beb70, edi_1 + 0x20becf0)
    
    pwh += 0x20
    edi_1 += 4
while (pwh s< &data_20bfa70)

waveInClose(hwi)
BOOL hObject = data_1c04428

if (hObject != 0xffffffff)
    CloseHandle(hObject)

data_1c04428 = 0xffffffff
data_20beb60 = 0
