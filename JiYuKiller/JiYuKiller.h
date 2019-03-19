#pragma once
#include "stdafx.h"
#include "resource.h"

INT_PTR CALLBACK MainWndProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);
INT_PTR CALLBACK ToolWndProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);

VOID OutPutStatus(const wchar_t* str, ...);

INT_PTR OnWnCommand(HWND hDlg, UINT id);
bool OnBeforeExit(HWND hDlg);
void OnInit(HWND hDlg);
void OnDestroy(HWND hDlg);
void OnAop(HWND hDlg);
void OnResetPID(HWND hDlg);
bool OnReadCommandLine(LPWSTR * szArgList, int argCount);

LRESULT CALLBACK EditProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

void SetStatIcon(HWND hDlg, int id, HBITMAP hBitmap);
void ReloadJiYuPid(HWND hDlg);
void ResetCtlStatus(HWND hDlg, bool ctled);
void SetCtlFailStatus(LPCWSTR fail);
void HandleMsg(LPWSTR buff);

void ResetGBStatus(int count, bool hasGb, bool hasHp);

void EmptyGBStatus();

