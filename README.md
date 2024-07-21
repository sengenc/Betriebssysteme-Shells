THM Betriebssysteme Hausaufgabe - BasicSH und AdvancedSH

Dieses Repository enthält die Implementierungen für die zweiteilige Hausaufgabe im Fach Betriebssysteme an der Technischen Hochschule Mittelhessen (THM). Es umfasst eine einfache Befehlszeilenshell (basicsh) sowie eine erweiterte Shell (advancedsh) mit Prozessverwaltungsfähigkeiten.
Übersicht

Das Projekt ist in zwei Hauptteile gegliedert:

    BasicSH: Eine einfache Kommandozeilen-Shell, die grundlegende Befehlsausführungen unterstützt.
    AdvancedSH: Eine Erweiterung von BasicSH, die Prozesslistenverwaltung und Signalbehandlung hinzufügt.
    
Funktionen

    Funktionen von BasicSH:
        Führt Befehle im Vorder- und Hintergrund aus.
        Unterstützt die Navigation in Verzeichnissen.
        Ermöglicht die Umleitung von Ein- und Ausgabe.

    Funktionen von AdvancedSH:
        Verwaltet eine Liste von Kindprozessen und speichert deren Zustände.
        Behandelt SIGCHLD-Signale zur Aktualisierung des Zustands beendeter Prozesse.    
