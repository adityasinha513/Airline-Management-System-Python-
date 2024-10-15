# Flight Management System (GUI)
A Python-based GUI application for managing and viewing flight schedules, including reminders for upcoming flights. The application is built using the tkinter library and provides different functionalities for users with roles such as admin, manager, and standard users.

# Features
# User Roles:
Admin: Manages the entire system with full access.
Manager: Oversees flight management.
Standard User: Can view flight information and receive reminders.
Flight Status:
View scheduled, delayed, and canceled flights.
Automatically updates based on the current time.
Reminders:
Set reminders for upcoming flights that notify users if a flight's time is approaching.
# Tech Stack
Python: Core programming language.
Tkinter: For building the graphical user interface.
Datetime Module: For managing and comparing flight times.

# Usage
Login:
Admins, managers, and standard users can log in with predefined credentials stored in the system.
Flight Management:
Users can view details of all scheduled, delayed, and canceled flights.
The system updates flight statuses in real-time.
Reminder Notifications:
If a scheduled flight's time is near, the system triggers a reminder window.
Future Enhancements
Add a database to store and dynamically manage flight data.
Allow admins and managers to add, update, or delete flight schedules.
Implement a notification system to send email alerts for flight updates.
